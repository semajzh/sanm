#include "buff201041.h"
#include "ground.h"
#include "log/logger.h"

void Buff201041::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j9 = Ground::addj9(ground, des, 9, 5);
    ground->m_group[des/10].m_item[des%10].j[9] += j9;
    ground->m_group[des/10].m_item[des%10].j[11] += 5;
}

void Buff201041::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[9] -= j9;
    ground->m_group[des/10].m_item[des%10].j[11] -= 5;
}
