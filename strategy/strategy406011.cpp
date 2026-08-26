#include "strategy406011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff406011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy406011::Strategy406011()
{
    id = 406011;
}

Strategy406011::~Strategy406011()
{

}

bool Strategy406011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff406011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

QVector<int> Strategy406011::selectObj(Ground* ground, int pos)
{
    QVector<int> objs;
    int g = pos / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] > 0 && ground->m_group[g].m_item[i].g[4] == 2)
        {
            objs.append(g*10+i);
        }
    }
    return objs;
}

