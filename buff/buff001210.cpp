#include "buff001210.h"
#include "ground.h"
#include "log/logger.h"

void Buff001210::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
    if (ground->m_group[des/10].m_item[des%10].k[1] < 0)
    {
        ground->m_group[des/10].m_item[des%10].k[1] = 0;
    }
}

void Buff001210::run(Ground* ground)
{
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 1, 1.8);
        k1 += k;
        ground->m_group[des/10].m_item[des%10].k[1] += k;
    }
}
