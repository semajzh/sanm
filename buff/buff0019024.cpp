#include "buff0019024.h"
#include "ground.h"
#include "log/logger.h"

void Buff0019024::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i2 = Ground::addin(ground, des, 2, -34.5f);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Ground::exenter(ground, src, des, id);
}

void Buff0019024::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Ground::exexit(ground, src, des, id);
}
