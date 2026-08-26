#include "buff0060121.h"
#include "ground.h"
#include "log/logger.h"

void Buff00601211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 12, src, method);
    j4 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 56.158f; //316.17,19.63
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
    Ground::exenter(ground, src, des, id);
}

void Buff00601211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] += j4;
    Ground::exexit(ground, src, des, id);
}

void Buff00601212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (objk2 > 0)
    {
        ground->m_group[objk2/10].m_item[objk2%10].k[2] -= k2;
    }
    if (objl2 > 0)
    {
        ground->m_group[objl2/10].m_item[objl2%10].l[2] -= l2;
    }
}

void Buff00601212::run(Ground* ground)
{
    if (ground->m_round == 4)
    {
        float point1 = Ground::pointbystar(ground, 18, src, method);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x3010);
        if (objs.size() > 0)
        {
            objk2 = objs.front();
            k2 = point1 + ground->m_group[des/10].m_item[des%10].i[1] / 36;
            k2 = Ground::addkn(ground, objk2, 2, k2);
            ground->m_group[objk2/10].m_item[objk2%10].k[2] += k2;
        }

        objs = Ground::selectObjN(ground, des, 0x4010);
        if (objs.size() > 0)
        {
            objl2 = objs.front();
            l2 = point1 + ground->m_group[des/10].m_item[des%10].i[1] / 36;
            l2 = Ground::addln(ground, objl2, 2, -l2);
            ground->m_group[objl2/10].m_item[objl2%10].l[2] += l2;
        }
    }
}
