#include "buff2100121.h"
#include "buff008.h"
#include "ground.h"
#include "log/logger.h"

void Buff21001211::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    Ground::actbr(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);

    float point2 = Ground::pointbystar(ground, 30, src, method);
    float jl = Ground::addbyix(ground, point2, ground->m_group[src/10].m_item[src%10].i[0]);
    if (qrand() % 100 + 1 > 100 - jl && ground->m_group[obj/10].m_item[obj%10].h[0] > 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff008(src, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff21001212::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21001213(src, des, method));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff21001213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 15)
    {
        float point1 = Ground::pointbystar(ground, 3, src, method);
        float j = Ground::addjn(ground, des, 11, point1);
        j11 += j;
        ground->m_group[des/10].m_item[des%10].j[11] += j;
    }
}

void Buff21001213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[11] -= j11;
}

void Buff21001213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 15)
    {
        float point1 = Ground::pointbystar(ground, 3, src, method);
        float j = Ground::addjn(ground, des, 11, point1);
        j11 += j;
        ground->m_group[des/10].m_item[des%10].j[11] += j;
    }
    if (count == 9 || count == 15)
    {
        run(ground);
    }
}

void Buff21001213::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 6, des);
    for (int obj : objs)
    {
        check008(ground, obj);
    }
}

bool Buff21001213::check008(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 8)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}
