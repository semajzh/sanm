#include "strategy009010.h"
#include "ground.h"
#include "item.h"
#include "buff/buff009010.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy009010::Strategy009010()
{
    id = 9010;
}

Strategy009010::~Strategy009010()
{

}

bool Strategy009010::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff009010(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy009010::selectObj(Ground* ground, int obj)
{
    int count = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[4] == 1)
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
