#include "buff0150120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0150120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        ground->m_group[des/10].m_item[des%10].i[n] -= i[n];
        i[n] = 0;
    }
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff0150120::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 10, des, method);
    float point2 = Ground::pointbystar(ground, 7, des, method);
    float maxi = Ground::getMaxi(ground, des);
    float point3 = Ground::addbyix(ground, point2, maxi);

    if (++count <= 5)
    {
        int index = Ground::getMaxiIndex(ground, des);
        if (index >= 0 && index <= 3)
        {
            i[index] += point1;
            k0 += point3;
            ground->m_group[des/10].m_item[des%10].i[index] += point1;
            ground->m_group[des/10].m_item[des%10].k[0] += point3;
        }
    }
}
