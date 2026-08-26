#include "buff0070222.h"
#include "ground.h"
#include "log/logger.h"

void Buff0070222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::pointbystar(ground, 16, src, method);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff0070222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}
