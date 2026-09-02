#include "buff0017522.h"
#include "ground.h"
#include "log/logger.h"

void Buff0017522::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 25, src, method);
    i3 = Ground::addin(ground, des, 3, -point1);
    ground->m_group[des/10].m_item[des%10].i[3] += i3;
}

void Buff0017522::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
}
