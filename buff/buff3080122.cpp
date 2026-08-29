#include "buff3080122.h"
#include "ground.h"
#include "log/logger.h"

void Buff3080122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::pointbystar(ground, 24, src, method);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff3080122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

