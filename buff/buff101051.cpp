#include "buff101051.h"
#include "ground.h"
#include "log/logger.h"

void Buff101051::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int i = 0; i < 3; ++i)
    {
        ground->m_group[des/10].m_item[i].j[13] -= j13[i];
        ground->m_group[des/10].m_item[i].j[14] -= j14[i];
    }
}

void Buff101051::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        if (obj == des)
        {
            continue;
        }
        j13[obj%10] += 3;
        j14[obj%10] += 3;
        ground->m_group[obj/10].m_item[obj%10].j[13] += 3;
        ground->m_group[obj/10].m_item[obj%10].j[14] += 3;
    }
}
