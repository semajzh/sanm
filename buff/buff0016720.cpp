#include "buff0016720.h"
#include "ground.h"
#include "log/logger.h"

void Buff0016720::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] += 46;
    l3 = Ground::addln(ground, des, 3, -23);
    ground->m_group[des/10].m_item[des%10].l[3] += l3;
}

void Buff0016720::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] -= 46;
    ground->m_group[des/10].m_item[des%10].l[3] -= l3;
}
