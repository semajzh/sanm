#include "strategy202011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff202011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy202011::Strategy202011()
{
    id = 202011;
}

Strategy202011::~Strategy202011()
{

}

bool Strategy202011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff202011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

QVector<int> Strategy202011::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[4] == 2)
        {
            objs.append(g*10+i);
        }
    }
    return objs;
}
