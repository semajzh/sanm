#include "buff3080122.h"
#include "ground.h"
#include "log/logger.h"

void Buff3080122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, src, method);
    l0 = Ground::addln(ground, des, 0, -point1 - ground->m_group[src/10].m_item[src%10].i[1]/30); //
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff3080122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

