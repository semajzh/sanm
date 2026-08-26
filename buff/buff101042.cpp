#include "buff101042.h"
#include "ground.h"
#include "log/logger.h"

void Buff101042::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] += 15;
}

void Buff101042::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= 15;
}
