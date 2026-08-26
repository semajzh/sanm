#include "buff101121.h"
#include "ground.h"
#include "log/logger.h"

void Buff101121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] += 5;
}

void Buff101121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[5] -= 5;
}
