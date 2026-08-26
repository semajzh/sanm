#include "method0030622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101.h"
#include "log/logger.h"

Method0030622::Method0030622()
{
    type = 2222;
    id = 30622;
    luck = 50;
}

Method0030622::~Method0030622()
{

}

int Method0030622::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 360, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff101(item1->g[0], obj, id, 1));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
