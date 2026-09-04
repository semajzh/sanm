#include "buff202021.h"
#include "ground.h"
#include "log/logger.h"

void Buff202021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k1 = -10;
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
    Ground::exenter(ground, src, des, id);
}

void Buff202021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
    Ground::exexit(ground, src, des, id);
}
