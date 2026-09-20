#include "buff2170221.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff21702211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 14, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    k0 = Ground::addkn(ground, des, 0, point2);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff21702211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    k0 = 0.0f;
}

void Buff21702211::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 35, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21702212(src, obj, method, 1));
    Ground::addBuff(ground, ground->buff[6][obj], buff);
}

void Buff21702212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (count < 3)
    {
        ++count;
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff21702212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    count = 0;
    Ground::exexit(ground, src, des, id);
}

void Buff21702212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (count < 3)
    {
        ++count;
        float point1 = Ground::pointbystar(ground, 4, src, method);
        float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        l0 += point2;
        ground->m_group[des/10].m_item[des%10].l[0] += point2;
    }
    Ground::exupdate(ground, src, des, id);
}

void Buff21702213::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 100, des, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[2]);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0023);
    for (int obj : objs)
    {
        int n = check21702212(ground, obj);
        if (n <= 0)
        {
            continue;
        }
        float point3 = point2 + n * 25;
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point3);
    }
}

int Buff21702213::check21702212(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 21702212)
        {
            QSharedPointer<Buff21702212> buff = qSharedPointerCast<Buff21702212>(pbuff);
            return buff->num();
        }
    }
    return 0;
}
