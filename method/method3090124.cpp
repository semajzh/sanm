#include "method3090124.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3090124.h"
#include "log/logger.h"

Method3090124::Method3090124()
{
    type = 2224;
    id = 3090124;
    luck = 70;
}

Method3090124::~Method3090124()
{

}

int Method3090124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 80, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0033);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3090124(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
