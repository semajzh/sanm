#include "buff201021.h"
#include "ground.h"
#include "log/logger.h"

void Buff201021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

void Buff201021::run(Ground* ground)
{
    if (count >= 2 || qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    ++count;
    j4 += 4;
    ground->m_group[des/10].m_item[des%10].j[4] += 4;
}
