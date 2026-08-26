#include "strategy108011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff108011.h"
#include "buff/buff1030122.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy108011::Strategy108011()
{
    id = 108011;
}

Strategy108011::~Strategy108011()
{

}

bool Strategy108011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff108011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, obj, 0x13, obj);
    for (int obj : objs)
    {
        int id = ground->m_group[obj/10].m_item[obj%10].id;
        if (id == 10107 || id == 10301 || id == 10601 || id == 30106 || id == 30501)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1030122(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[3][obj], buff);
        }
    }

    return true;
}
