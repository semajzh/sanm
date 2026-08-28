#include "buff2160121.h"
#include "ground.h"
#include "log/logger.h"

void Buff21601211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    l9 = Ground::addln(ground, des, 9, -point2);
    l11 = Ground::addln(ground, des, 11, -point2);
    ground->m_group[des/10].m_item[des%10].l[9] += l9;
    ground->m_group[des/10].m_item[des%10].l[11] += l11;
}

void Buff21601211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[9] -= l9;
    ground->m_group[des/10].m_item[des%10].l[11] -= l11;
}

bool Buff21601211::run(Ground* ground, int& obj)
{
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (qrand() % 100 + 1 > 100 - jl)
    {
        obj = meta;
        return true;
    }
    return false;
}

void Buff21601212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (ground->m_round == 0)
    {
        return;
    }
    float jl = Ground::addbyix(ground, 50, meta, 10000);
    count += (qrand() % 100 + 1 <= 100 - jl) ? 1 : 2;
}

void Buff21601212::run(Ground* ground)
{
    if (count <= 0)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 100, src, method);
    float point = point1 * count;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021, des);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[0] >= ground->m_group[des/10].m_item[des%10].i[1])
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
        else
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        }
    }
}


