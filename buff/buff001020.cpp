#include "buff001020.h"
#include "ground.h"
#include "log/logger.h"

void Buff001020::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff001020::run(Ground* ground)
{
    if (count++ < 8)
    {
        float k = Ground::addkn(ground, des, 2, 1);
        ground->m_group[des/10].m_item[des%10].k[2] += k;
        k2 += k;
    }
}
