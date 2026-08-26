#include "method0012722.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "log/logger.h"
#include <QDebug>

Method0012722::Method0012722()
{
    type = 2222;
    id = 12722;
    luck = 55;
}

Method0012722::~Method0012722()
{

}

int Method0012722::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 260, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0xA030);
    for (int obj : objs)
    {
        Ground::exremove(ground, obj, 3);
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
