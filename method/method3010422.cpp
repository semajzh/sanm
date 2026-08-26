#include "method3010422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff015.h"
#include "log/logger.h"

Method3010422::Method3010422()
{
    type = 22;
    id = 3010422;
    luck = 70;
}

Method3010422::~Method3010422()
{

}

int Method3010422::getLuck(Ground* , Item* item1)
{
    luck = 70 + 1.05 * item1->star/2;
    return luck;
}

int Method3010422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 80, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        bool b015 = check015(ground, obj);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        if (b015)
        {
            Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
        }
    }

    return 1;
}

bool Method3010422::check015(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 15)
        {
            return true;
        }
    }
    return false;
}
