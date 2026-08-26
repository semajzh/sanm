#include "buff409011.h"
#include "ground.h"
#include "log/logger.h"

float Buff409011::run(Ground* ground, int obj)
{
    float point = 0;
    if (ground->m_group[obj/10].m_item[obj%10].i[2] < ground->m_group[des/10].m_item[des%10].i[2])
    {
        point = -5;
    }
    return point;
}
