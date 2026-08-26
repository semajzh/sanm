#include "buff202011.h"
#include "ground.h"
#include "log/logger.h"

void Buff202011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    index = getMaxiIndex(ground, des);
    if (index >= 0)
    {
        maxi = ground->m_group[des/10].m_item[des%10].i[index] * 0.05;
        ground->m_group[des/10].m_item[des%10].i[index] += maxi;
    }
}

void Buff202011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (index >= 0)
    {
        ground->m_group[des/10].m_item[des%10].i[index] -= maxi;
    }
}

int Buff202011::getMaxiIndex(Ground* ground, int obj)
{
    int index = -1;
    float max = 0;
    int g = obj/10;
    int i = obj%10;
    for (int j = 0; j < 4; ++j)
    {
        if (ground->m_group[g].m_item[i].i[j] > max)
        {
            max = ground->m_group[g].m_item[i].i[j];
            index = j;
        }
    }
    return index;
}
