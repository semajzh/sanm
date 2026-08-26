#include "buff0014220.h"
#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014220::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j11 = Ground::pointbystar(ground, 30, src, method);
    ground->m_group[des/10].m_item[des%10].j[11] += j11;
}

void Buff0014220::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= j11;
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}

void Buff0014220::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    float point2 = Ground::pointbystar(ground, 200, src, method);

    if (++count <= 6)
    {
        int k = Ground::addkn(ground, des, 1, point1);
        k1 += k;
        ground->m_group[des/10].m_item[des%10].k[1] += k;
    }
    if (count % 3 == 0)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
        for (int obj : objs)
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
        }
    }
}
