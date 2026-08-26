#include "buff401041.h"
#include "buff012.h"
#include "ground.h"
#include "log/logger.h"

void Buff401041::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff401041::run(Ground* ground)
{
    if (++count <= 6)
    {
        j2 += 4;
        k2 += 4;
        ground->m_group[des/10].m_item[des%10].j[2] += 4;
        ground->m_group[des/10].m_item[des%10].k[2] += 4;
    }
}
