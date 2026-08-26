#include "strategy201012.h"
#include "ground.h"
#include "item.h"
//#include "buff/buff201012.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201012::Strategy201012()
{
    id = 201012;
}

Strategy201012::~Strategy201012()
{

}

bool Strategy201012::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int g = item1->g[0] / 10;
    int f[5] = {0};
    for (int i = 0; i < 3; ++i)
    {
        ++f[ground->m_group[g].m_item[i].f[0]];
    }
    float faction = 0;
    if (f[1] > 2 || f[2] > 2 || f[3] > 2 || f[4] > 2)
    {
        faction = 10;
    }
    else if (f[1] > 1 || f[2] > 1 || f[3] > 1 || f[4] > 1)
    {
        faction = 5;
    }
    if (faction == 0)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[g].m_item[i].i[0] += ground->m_group[g].m_item[i].i[8] * 0.1f;
            ground->m_group[g].m_item[i].i[1] += ground->m_group[g].m_item[i].i[9] * 0.1f;
            ground->m_group[g].m_item[i].i[2] += ground->m_group[g].m_item[i].i[10] * 0.1f;
            ground->m_group[g].m_item[i].i[3] += ground->m_group[g].m_item[i].i[11] * 0.1f;
        }
    }

    return true;
}
