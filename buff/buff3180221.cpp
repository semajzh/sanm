#include "buff3180221.h"
#include "ground.h"
#include "log/logger.h"

void Buff3180221::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0xa021);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff(new Buff31802211(src, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}

void Buff31802211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    for (int i = 0; i < 3; ++i)
    {
        Item& item = ground->m_group[des/10].m_item[i];
        g2[i] = item.g[2];
        g3[i] = item.g[3];
        item.g[2] = item.g[3] = i == des%10 ? 84 : 8;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff31802211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int i = 0; i < 3; ++i)
    {
        Item& item = ground->m_group[des/10].m_item[i];
        item.g[2] = g2[i];
        item.g[3] = g3[i];
    }
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff31802211::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

void Buff31802211::run(Ground* ground)
{
    if (++count <= 5)
    {
        float point1 = Ground::pointbystar(ground, 5, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
    float point = Ground::pointbystar(ground, 100, src, method);
    Ground::actbr(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], method, point);
}
