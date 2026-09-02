#include "buff0016020.h"
#include "ground.h"
#include "log/logger.h"

void Buff0016020::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] += 69;
    k0 = Ground::addkn(ground, des, 0, 11.5);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff0016020::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= 69;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}
