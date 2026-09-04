#include "buff201052.h"
#include "ground.h"
#include "log/logger.h"

void Buff201052::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] += 15;
}

void Buff201052::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] -= 15;
}
