#include "strategy401121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401121.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401121::Strategy401121()
{
    id = 401121;
}

Strategy401121::~Strategy401121()
{

}

bool Strategy401121::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs;
    objs.append(item1->g[0]);
    int obj = selectObj(ground, item1->g[0]);
    if (obj >= 0)
    {
        objs.append(obj);
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

int Strategy401121::selectObj(Ground* ground, int obj)
{
    int obj2 = -1, max = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (g*10+i == obj)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[0] > max)
        {
            max = ground->m_group[g].m_item[i].i[0];
            obj2 = g*10+i;
        }
    }
    return obj2;
}
