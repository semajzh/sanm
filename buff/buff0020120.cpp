#include "buff0020120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0020120::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] += 20.0f;
}

void Buff0020120::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[0] -= 20.0f;
}

void Buff0020120::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 110, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}
