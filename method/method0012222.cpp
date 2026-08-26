#include "method0012222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff017.h"
#include "log/logger.h"

Method0012222::Method0012222()
{
    type = 2222;
    id = 12222;
    luck = 45;
}

Method0012222::~Method0012222()
{

}

int Method0012222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 300, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 150, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        bool b017 = check017(ground, obj);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (b017)
        {
            Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
        }
    }

    return 1;
}

bool Method0012222::check017(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 17)
        {
            return true;
        }
    }
    return false;
}
