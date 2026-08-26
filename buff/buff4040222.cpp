#include "buff4040222.h"
#include "ground.h"
#include "log/logger.h"

void Buff4040222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j4 = Ground::pointbystar(ground, 10, src, method);
    ground->m_group[des/10].m_item[des%10].j[4] += j4;
}

void Buff4040222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

