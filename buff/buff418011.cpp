#include "buff418011.h"
#include "ground.h"
#include "log/logger.h"

void Buff418011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff418011::run(Ground* ground, int m)
{
    if (ground->m_group[des/10].m_item[des%10].methods[3] != m)
    {
        return;
    }
    if (++count <= 8)
    {
        float point1 = Ground::addbyix(ground, 2, ground->m_group[src/10].m_item[src%10].i[1]);
        float point2 = Ground::addkn(ground, des, 0, point1);
        k0 += point2;
        ground->m_group[des/10].m_item[des%10].k[0] += point2;
    }
}
