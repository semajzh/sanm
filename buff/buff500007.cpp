#include "buff500007.h"
#include "ground.h"
#include "log/logger.h"

void Buff500007::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        i[n] = ground->m_group[des/10].m_item[des%10].i[n] * 0.3f;
        ground->m_group[des/10].m_item[des%10].i[n] += i[n];
    }
}

void Buff500007::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        ground->m_group[des/10].m_item[des%10].i[n] -= i[n];
    }
}
