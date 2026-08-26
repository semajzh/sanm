#include "strategy315021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff315021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy315021::Strategy315021()
{
    id = 315021;
}

Strategy315021::~Strategy315021()
{

}

bool Strategy315021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff315021(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

QVector<int> Strategy315021::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].f[1] != 1)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}
