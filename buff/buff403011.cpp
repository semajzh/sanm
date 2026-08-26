#include "buff403011.h"
#include "ground.h"
#include "log/logger.h"

void Buff403011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] += 7;
}

void Buff403011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= 7;
}
