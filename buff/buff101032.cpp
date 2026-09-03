#include "buff101032.h"
#include "ground.h"
#include "log/logger.h"

void Buff101032::run(Ground* ground, int obj2)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 1)
    {
        return;
    }

    float p = Ground::addbyix(ground, 30, ground->m_group[des/10].m_item[des%10].i[0]);
    if (qrand() % 100 + 1 <= 100 - p)
    {
        return;
    }

    Ground::run3332(ground, des, obj2, false);
}
