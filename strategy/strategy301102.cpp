#include "strategy301102.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301102.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301102::Strategy301102()
{
    id = 301102;
}

Strategy301102::~Strategy301102()
{

}

bool Strategy301102::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301102(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy301102::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].f[1] == 1)
        {
            objs.append(g*10+i);
        }
    }
    return objs;
}
