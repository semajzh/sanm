#include "buff101011.h"
#include "ground.h"
#include "log/logger.h"

void Buff101011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] += 5;
}

void Buff101011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] -= 5;
}
