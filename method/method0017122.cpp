#include "method0017122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "log/logger.h"

Method0017122::Method0017122()
{
    type = 2222;
    id = 17122;
    luck = 40;
}

Method0017122::~Method0017122()
{

}

int Method0017122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 150, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
