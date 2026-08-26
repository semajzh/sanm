#include "buff001230.h"
#include "ground.h"
#include "log/logger.h"

void Buff001230::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round == 4)
    {
        k2 = Ground::addkn(ground, des, 2, 10.0f);
        ground->m_group[des/10].m_item[des%10].k[2] += k2;
    }
}

void Buff001230::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
    k2 = 0;
}
