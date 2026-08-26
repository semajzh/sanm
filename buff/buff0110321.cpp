#include "buff0110321.h"
#include "ground.h"
#include "log/logger.h"

void Buff0110321::run(Ground* ground, int obj, int type)
{
    if (qrand() % 100 + 1 <= 100 - 35)
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 3)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01103212(src, obj, method, 2, type));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    float point1 = Ground::pointbystar(ground, 25, src, method);
    float point2 = Ground::pointbystar(ground, 10, src, method);
    float point = point1 + point2 * selectobjf1(ground);
    Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], method, point);
}

int Buff0110321::selectobjf1(Ground* ground)
{
    int n = 0;
    int g = des / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].f[1] == 1)
        {
            ++n;
        }
    }
    return n;
}

void Buff01103212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 3, src, method);
    if (meta == 1 && ++count1 <= 10)
    {
        k1 += point1;
        ground->m_group[des/10].m_item[des%10].k[1] -= point1;
    }
    if (meta == 2 && ++count2 <= 10)
    {
        k2 += point1;
        ground->m_group[des/10].m_item[des%10].k[2] -= point1;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff01103212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
    Ground::exexit(ground, src, des, id);
}

void Buff01103212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 3, src, method);
    if (buff->meta == 1 && ++count1 <= 10)
    {
        k1 += point1;
        ground->m_group[des/10].m_item[des%10].k[1] -= point1;
    }
    if (buff->meta == 2 && ++count2 <= 10)
    {
        k2 += point1;
        ground->m_group[des/10].m_item[des%10].k[2] -= point1;
    }
    Ground::exupdate(ground, src, des, id);
}

