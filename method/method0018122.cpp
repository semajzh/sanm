#include "method0018122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0018122.h"
#include "log/logger.h"

Method0018122::Method0018122()
{
    type = 2222;
    id = 18122;
    luck = 50;
}

Method0018122::~Method0018122()
{

}

int Method0018122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0018122(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 184);
    }

    return 1;
}
