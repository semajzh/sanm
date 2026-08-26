#include "buff407031.h"
#include "buff005.h"
#include "ground.h"
#include "log/logger.h"

void Buff407031::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff407031::run(Ground* ground)
{
    if (ground->m_round != 2)
    {
        return;
    }

    k0 = Ground::addkn(ground, des, 0, 8);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}
