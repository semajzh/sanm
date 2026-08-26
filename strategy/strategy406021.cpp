#include "strategy406021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff406021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy406021::Strategy406021()
{
    id = 406021;
}

Strategy406021::~Strategy406021()
{

}

bool Strategy406021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff406021(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}

QVector<int> Strategy406021::selectObj(Ground* ground, int pos)
{
    QVector<int> objs;
    int g = pos / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] > 0 && ground->m_group[g].m_item[i].f[0] == 4)
        {
            objs.append(g*10+i);
        }
    }
    return objs;
}

