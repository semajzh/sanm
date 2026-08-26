#include "method0012022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff015.h"
#include "log/logger.h"

Method0012022::Method0012022()
{
    type = 2222;
    id = 12022;
    luck = 55;
}

Method0012022::~Method0012022()
{

}

int Method0012022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 80, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x6040);
    for (int obj : objs)
    {
        bool b015 = check015(ground, obj);
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        if (b015)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
        }
    }

    return 1;
}

bool Method0012022::check015(Ground* ground, int obj)
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
