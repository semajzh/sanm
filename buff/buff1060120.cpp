#include "buff1060120.h"
#include "ground.h"
#include "log/logger.h"

void Buff1060120::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float jl = ground->m_group[src/10].m_item[src%10].i[1] / 15;
    if (qrand() % 100 + 1 <= 100 - point1 - jl)
    {
        return;
    }

    float point2 = Ground::pointbystar(ground, 100, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0022);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10601202(des, obj, 1060120));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

void Buff10601202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float l = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 150;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        l0 += l;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff10601202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff10601202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float l = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 150;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
        l0 += l;
    }
    Ground::exupdate(ground, src, des, id);
}


