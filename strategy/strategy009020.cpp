#include "strategy009020.h"
#include "ground.h"
#include "item.h"
#include "buff/buff009020.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy009020::Strategy009020()
{
    id = 9020;
}

Strategy009020::~Strategy009020()
{

}

bool Strategy009020::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff009020(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy009020::selectObj(Ground* ground, int obj)
{
    int count = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[4] == 2)
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
