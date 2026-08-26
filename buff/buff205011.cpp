#include "buff205011.h"
#include "ground.h"
#include "log/logger.h"

void Buff205011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    index = maxi(ground, des);
    ix = ground->m_group[des/10].m_item[des%10].i[index];
    ix = ix * (0.02 + ground->m_group[src/10].m_item[src%10].i[1] / 12287.0f);
    ground->m_group[des/10].m_item[des%10].i[index] += ix;

    l0 = Ground::addln(ground, des, 0, -2 - ground->m_group[src/10].m_item[src%10].i[0] / 122.87f);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff205011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[index] -= ix;
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

int Buff205011::maxi(Ground* ground, int pos)
{
    float max = 0;
    int index = -1;
    int g = pos/10;
    int i = pos%10;
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
