#include "buff0014024.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014024::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i3 = Ground::pointbystar(ground, 30, src, method);
    ground->m_group[des/10].m_item[des%10].i[3] += i3;
}

void Buff0014024::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
}
