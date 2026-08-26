#include "buff0090121.h"
#include "ground.h"
#include "log/logger.h"

void Buff00901211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff00901211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff00901212::run(Ground* ground)
{
    if (ground->m_round != 4 && ground->m_round != 6 && ground->m_round != 8)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 340, src, method);
    float point2 = Ground::pointbystar(ground, 20, src, method);
    float point = point1 + point2 * (ground->m_round - 4);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[0] > ground->m_group[des/10].m_item[des%10].i[1])
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
    }
}
