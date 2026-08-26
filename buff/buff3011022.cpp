#include "buff3011022.h"
#include "ground.h"
#include "log/logger.h"

void Buff3011022::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = ground->m_group[src/10].m_item[src%10].star;
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff3011022::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}
