#include "strategy007040.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

Strategy007040::Strategy007040()
{
    id = 7040;
}

Strategy007040::~Strategy007040()
{

}

bool Strategy007040::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].l[2] -= 5;
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].l[1] -= 5;
    }

    return true;
}
