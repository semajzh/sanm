#include "buff0017922.h"
#include "ground.h"
#include "log/logger.h"

void Buff00179221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    j13 = Ground::addjn(ground, des, 13, point1);
    ground->m_group[des/10].m_item[des%10].j[13] += j13;
}

void Buff00179221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}
