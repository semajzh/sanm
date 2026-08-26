#include "strategy104011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff104011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy104011::Strategy104011()
{
    id = 104011;
}

Strategy104011::~Strategy104011()
{

}

bool Strategy104011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        if (item2.g[4] == 2 || item2.g[4] == 3)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff104011(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
        }
    }

    return true;
}

