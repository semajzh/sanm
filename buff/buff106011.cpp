#include "buff106011.h"
#include "ground.h"
#include "log/logger.h"


void Buff106011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
}


void Buff106011::run(Ground* ground)
{
    if (++count2223 < 2 || count >= 2)
    {
        return;
    }
    count2223 = 0;
    ground->m_group[des/10].m_item[des%10].j[6] += 5;
    j6 += 5;
    ++count;
}
