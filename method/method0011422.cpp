#include "method0011422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011922.h"
#include "log/logger.h"
#include <QDebug>

Method0011422::Method0011422()
{
    type = 2222;
    id = 11422;
    luck = 55;
}

Method0011422::~Method0011422()
{

}

int Method0011422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        int point = Ground::pointbystar(ground, 350, item1->g[0], id);
        float k12 = Ground::exsize(ground, obj) > 0 ? 25 : 0;
        Ground::actml(ground, item1, &(ground->m_group[obj/10].m_item[obj%10]), id, point, k12);
    }

    return 1;
}
