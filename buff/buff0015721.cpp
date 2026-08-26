#include "buff0015721.h"
#include "ground.h"
#include "log/logger.h"

void Buff0015721::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -29.9f);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff0015721::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
