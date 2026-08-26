#include "method0088324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0088324.h"
#include "log/logger.h"

Method0088324::Method0088324()
{
    type = 2224;
    id = 88324;
    luck = 70;
}

Method0088324::~Method0088324()
{

}

int Method0088324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0088324(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 80);
    }

    return 1;
}
