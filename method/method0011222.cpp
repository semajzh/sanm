#include "method0011222.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QDebug>

Method0011222::Method0011222()
{
    type = 2222;
    id = 11222;
    luck = 50;
}

Method0011222::~Method0011222()
{

}

int Method0011222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 80, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    QVector<int> objs1 = Ground::selectObjN(ground, item1->g[0], 0x1030);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs)
        {
            Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], id, point1);
        }
    }
    objs1 = Ground::selectObjN(ground, item1->g[0], 0x3030);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs)
        {
            Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], id, point1);
        }
    }

    return 1;
}
