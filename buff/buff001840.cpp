#include "buff001840.h"
#include "ground.h"
#include "log/logger.h"

void Buff001840::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[16] += 8;
}

void Buff001840::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[16] -= 8;
}
