#include "buff0012422.h"
#include "ground.h"
#include "log/logger.h"

void Buff0012422::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 10, src, method);
    j9 = Ground::addj9(ground, des, 9, point1);
    ground->m_group[des/10].m_item[des%10].j[9] += j9;
}

void Buff0012422::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[9] -= j9;
}
