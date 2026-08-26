#include "buff401082.h"
#include "ground.h"
#include "log/logger.h"

void Buff401082::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] += 20;
    ground->m_group[des/10].m_item[des%10].i[3] += 20;
}

void Buff401082::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= 20;
    ground->m_group[des/10].m_item[des%10].i[3] -= 20;
}
