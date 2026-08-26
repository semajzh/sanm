#include "buff4010422.h"
#include "ground.h"
#include "log/logger.h"

void Buff40104221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 50, src, method);
    j17 = Ground::addj17(ground, des, 17, point1);
    ground->m_group[des/10].m_item[des%10].j[17] += j17;
}

void Buff40104221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[17] -= j17;
}

