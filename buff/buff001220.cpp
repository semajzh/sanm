#include "buff001220.h"
#include "ground.h"
#include "log/logger.h"

void Buff001220::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        k1 = 9.9f;
        ground->m_group[des/10].m_item[des%10].k[1] += k1;
    }
}

void Buff001220::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
    k1 = 0;
}

void Buff001220::run(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].k[1] -= k1;
        k1 = 0;
    }
}

