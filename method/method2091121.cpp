#include "method2091121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2091121.h"
#include "log/logger.h"

Method2091121::Method2091121()
{
    type = 21;
    id = 2091121;
}

Method2091121::~Method2091121()
{

}

int Method2091121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs;
    objs.append(item1->g[0]);
    int obj = selectObj(ground, item1->g[0]);
    if (obj > 0)
    {
        objs.append(obj);
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2091121(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return 1;
}

int Method2091121::selectObj(Ground* ground, int obj)
{
    int max = 0;
    int obj1 = -1;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (g*10+i == obj)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[0] > max)
        {
            max = ground->m_group[g].m_item[i].i[0];
            obj1 = g*10+i;
        }
    }
    return obj1;
}
