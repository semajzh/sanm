#include "buff401071.h"
#include "ground.h"
#include "log/logger.h"

void Buff401071::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j11 = Ground::addjn(ground, des, 11, 6);
    j12 = Ground::addjn(ground, des, 12, 6);
    ground->m_group[des/10].m_item[des%10].j[11] += j11;
    ground->m_group[des/10].m_item[des%10].j[12] += j12;
}

void Buff401071::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= j11;
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
}
