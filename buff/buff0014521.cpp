#include "buff0014521.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014521::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff0014521::run(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 7, src, method);
    int k = Ground::addkn(ground, des, 0, point1);
    ground->m_group[des/10].m_item[des%10].k[0] += k;
    k0 += k;
}
