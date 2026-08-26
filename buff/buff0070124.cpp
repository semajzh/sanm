#include "buff0070124.h"
#include "ground.h"
#include "log/logger.h"

bool Buff0070124::run(Ground* ground, int m)
{
    if (m != method)
    {
        return false;
    }

    float jl = Ground::addbyix(ground, 50, ground->m_group[src/10].m_item[src%10].i[1]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return false;
    }

    return true;
}
