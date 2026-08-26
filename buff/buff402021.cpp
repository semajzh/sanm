#include "buff402021.h"
#include "ground.h"
#include "log/logger.h"

void Buff402021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
}

void Buff402021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff402021::run(Ground* ground)
{
    if (++count > 10)
    {
        return;
    }

    k0 += 2;
    ground->m_group[des/10].m_item[des%10].k[0] += 2;
}
