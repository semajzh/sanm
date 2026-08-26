#include "method1140224.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1140224.h"
#include "buff/buff015.h"
#include "log/logger.h"

Method1140224::Method1140224()
{
    type = 2224;
    id = 1140224;
    luck = 60;
}

Method1140224::~Method1140224()
{

}

int Method1140224::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    if (check114021(ground, item1->g[0]))
    {
        point2 = Ground::addbyix(ground, point2, item1->i[0]);
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1041, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1140224(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    if (qrand() % 100 + 1 < 100 - point2)
    {
        return 1;
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0xa041, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method1140224::check114021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 114021)
        {
            return true;
        }
    }
    return false;
}
