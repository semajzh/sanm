#include "buff201081.h"
#include "ground.h"
#include "log/logger.h"

void Buff201081::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i0 = ground->m_group[des/10].m_item[des%10].i[1] * 0.25f;
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
}

void Buff201081::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
}

float Buff201081::run(Ground* , int b)
{
    float point = (count > 0 ? 40 : 0);
    count = b ? 1 : 0;
    return point;
}
