#include "strategy205011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff205011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy205011::Strategy205011()
{
    id = 205011;
}

Strategy205011::~Strategy205011()
{

}

bool Strategy205011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObjFaction(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff205011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

QVector<int> Strategy205011::selectObjFaction(Ground* ground, int pos)
{
    QVector<int> objs;
    int g = pos / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] > 0 && ground->m_group[g].m_item[i].f[0] == 2)
        {
            objs.append(ground->m_group[g].m_item[i].g[0]);
        }
    }
    return objs;
}
