#include "buff102011.h"
#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

void Buff102011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::addkn(ground, des, 0, 5);
    ground->m_group[des/10].m_item[des%10].j[11] += 12;
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff102011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= 12;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}
