#include "buff0018122.h"
#include "ground.h"
#include "log/logger.h"

void Buff0018122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] += 23;
}

void Buff0018122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= 23;
}
