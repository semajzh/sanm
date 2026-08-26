#include "method1010221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1010221::Method1010221()
{
    type = 21;
    id = 1010221;
}

Method1010221::~Method1010221()
{

}

int Method1010221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs;
    objs.append(item1->g[0]);
    int obj = selectObj(ground, item1->g[0]);
    if (obj >= 0)
    {
        objs.append(obj);
    }
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10102211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
    obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10102212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

int Method1010221::selectObj(Ground* ground, int obj)
{
    int obj1 = -1, max = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (obj == g*10+i)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[2] > max)
        {
            max = ground->m_group[g].m_item[i].i[2];
            obj1 = g*10+i;
        }
    }
    return obj1;
}

