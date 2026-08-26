#include "buff001400.h"
#include "ground.h"
#include "log/logger.h"

void Buff001400::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] += 15;
}

void Buff001400::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= 15;
}

