#include "strategy009030.h"
#include "ground.h"
#include "item.h"
#include "buff/buff009030.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy009030::Strategy009030()
{
    id = 9030;
}

Strategy009030::~Strategy009030()
{

}

bool Strategy009030::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff009030(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy009030::selectObj(Ground* ground, int obj)
{
    int count = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[4] == 3)
        {
            ++count;
        }
    }
    QVector<int> objs;
    if (count == 3)
    {
        objs.append(g*10);
        objs.append(g*10+1);
        objs.append(g*10+2);
    }
    return objs;
}
