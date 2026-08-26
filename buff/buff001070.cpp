#include "buff001070.h"
#include "ground.h"
#include "log/logger.h"

void Buff001070::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i0 = ground->m_group[des/10].m_item[des%10].i[1] * 0.12;
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
}

void Buff001070::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
}
