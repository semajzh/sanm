#include "buff001080.h"
#include "ground.h"
#include "log/logger.h"

void Buff001080::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i1 = ground->m_group[des/10].m_item[des%10].i[0] * 0.12;
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
}

void Buff001080::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
}
