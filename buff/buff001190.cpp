#include "buff001190.h"
#include "ground.h"
#include "log/logger.h"

void Buff001190::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k1 = Ground::addkn(ground, des, 1, 6.5);
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
}

void Buff001190::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}
