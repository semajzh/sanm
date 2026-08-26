#include "buff0110222.h"
#include "ground.h"
#include "log/logger.h"

void Buff0110222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k1 = Ground::pointbystar(ground, 20, src, method);
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
}

void Buff0110222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}
