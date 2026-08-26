#include "buff101101.h"
#include "ground.h"
#include "log/logger.h"

void Buff101101::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l4 = Ground::addln(ground, des, 4, -12);
    ground->m_group[des/10].m_item[des%10].l[4] += l4;
}

void Buff101101::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[4] -= l4;
}
