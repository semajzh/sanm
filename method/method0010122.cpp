#include "method0010122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "log/logger.h"
#include <QDebug>

Method0010122::Method0010122()
{
    type = 2222;
    id = 10122;
    luck = 60;
}

Method0010122::~Method0010122()
{

}

int Method0010122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        Ground::exremove(ground, obj, 1);
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
