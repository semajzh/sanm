#include "buff201023.h"
#include "buff004.h"
#include "ground.h"
#include "log/logger.h"

float Buff201023::run(Ground* ground, int obj)
{
    float point = 0;
    if (ground->m_group[des/10].m_item[des%10].h[0] < ground->m_group[obj/10].m_item[obj%10].h[0])
    {
        point = 10;
    }
    return point;
}

void Buff201023::run(Ground* ground, int obj, float& point)
{
    point = 0;
    if (ground->m_group[des/10].m_item[des%10].h[0] < ground->m_group[obj/10].m_item[obj%10].h[0])
    {
        point = 30;
    }
}
