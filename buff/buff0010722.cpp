#include "buff0010722.h"
#include "ground.h"
#include "log/logger.h"

void Buff00107222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::pointbystar(ground, 30, src, method);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff00107222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
