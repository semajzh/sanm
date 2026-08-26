#include "strategy007030.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Strategy007030::Strategy007030()
{
    id = 7030;
}

Strategy007030::~Strategy007030()
{

}

bool Strategy007030::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int g = item1->g[0] / 10;
    for (int i = 0; i < 3; ++i)
    {
        ground->m_group[g].m_item[i].i[0] *= 1.05f;
        ground->m_group[g].m_item[i].i[1] *= 1.05f;
        ground->m_group[g].m_item[i].i[2] *= 1.05f;
        ground->m_group[g].m_item[i].i[3] *= 1.05f;
    }
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].i[0] *= 1.03f;
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].i[1] *= 1.03f;
    }

    return true;
}
