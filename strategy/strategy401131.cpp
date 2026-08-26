#include "strategy401131.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401131.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401131::Strategy401131()
{
    id = 401131;
}

Strategy401131::~Strategy401131()
{

}

bool Strategy401131::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401131(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy401131::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10, obj1 = -1, max = 0;
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
            obj1 = g*10+i;
        }
    }
    if (obj1 >= 0)
    {
        objs.append(obj1);
    }
    return objs;
}
