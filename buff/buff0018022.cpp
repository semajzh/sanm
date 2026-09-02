#include "buff0018022.h"
#include "ground.h"
#include "log/logger.h"

void Buff0018022::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 = Ground::addkn(ground, des, 0, 17.25f);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::addi2(ground, des, 28.75f);
}

void Buff0018022::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    Ground::addi2(ground, des, -28.75);
}
