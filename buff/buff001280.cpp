#include "buff001280.h"
#include "ground.h"
#include "log/logger.h"

void Buff001280::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] += 8;
}

void Buff001280::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] -= 8;
}
