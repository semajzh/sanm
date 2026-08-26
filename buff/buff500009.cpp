#include "buff500009.h"
#include "ground.h"
#include "log/logger.h"

void Buff500009::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = 10 * meta;
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff500009::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}
