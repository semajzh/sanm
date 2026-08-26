#include "strategy409011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff409011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy409011::Strategy409011()
{
    id = 409011;
}

Strategy409011::~Strategy409011()
{

}

bool Strategy409011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectobj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff409011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

QVector<int> Strategy409011::selectobj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].g[4] != 1)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}
