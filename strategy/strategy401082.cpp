#include "strategy401082.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401082.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401082::Strategy401082()
{
    id = 401082;
}

Strategy401082::~Strategy401082()
{

}

bool Strategy401082::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        if (ground->m_group[obj/10].m_item[obj%10].g[4] != 2)
        {
            continue;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401082(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
