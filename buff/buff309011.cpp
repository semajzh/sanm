#include "buff309011.h"
#include "ground.h"
#include "log/logger.h"

void Buff309011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j7 = Ground::addbyix(ground, 8, ground->m_group[src/10].m_item[src%10].i[0]);
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
}

void Buff309011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
}
