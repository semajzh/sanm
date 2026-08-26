#include "buff1080121.h"
#include "ground.h"
#include "log/logger.h"

void Buff1080121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

bool Buff1080121::run(Ground* ground, int obj)
{
    if (obj < 0 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return false;
    }

    float point1 = Ground::pointbystar(ground, 70, src, method);
    float point2 = Ground::pointbystar(ground, 25, src, method);

    Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1 + xj*7);

    int jl = point2 + ground->m_group[src/10].m_item[src%10].i[1] / 20; //
    if (qrand() % 100 + 1 > 100 - jl)
    {
        addxj(ground);
    }

    return true;
}

void Buff1080121::run(Ground* ground)
{
    if (xj < 6)
    {
        Ground::run2223(ground, des, -1, false, false);
    }
    else
    {
        Ground::run2223(ground, des, -1, true, false);
    }
}

void Buff1080121::addxj(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 3, src, method);
    if (++xj > 10)
    {
        xj = 10;
    }
    k2 += point1;
    ground->m_group[des/10].m_item[des%10].k[2] += point1;
}
