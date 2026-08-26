#include "buff001640.h"
#include "ground.h"
#include "log/logger.h"

void Buff001640::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
}

void Buff001640::run(Ground* ground)
{
    j2 += 1;
    ground->m_group[des/10].m_item[des%10].j[2] += 1;
}
