#include "strategy204011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff204011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy204011::Strategy204011()
{
    id = 204011;
}

Strategy204011::~Strategy204011()
{

}

bool Strategy204011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        int id = ground->m_group[obj/10].m_item[obj%10].id;
        if (id != 20102 && id != 20110 && id != 20401)
        {
            continue;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff204011(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    return true;
}
