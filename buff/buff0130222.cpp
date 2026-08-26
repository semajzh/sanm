#include "buff0130222.h"
#include "buff1030122.h"
#include "ground.h"
#include "log/logger.h"

void Buff0130222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, des, method);
    float point2 = Ground::pointbystar(ground, 2, des, method);
    float point3 = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[1]);
    j23 = point3 + point2 * checkBuff(ground);
    ground->m_group[des/10].m_item[des%10].j[2] += j23;
    ground->m_group[des/10].m_item[des%10].j[3] += j23;
}

void Buff0130222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j23;
    ground->m_group[des/10].m_item[des%10].j[3] -= j23;
}

void Buff0130222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 8, des, method);
    float point2 = Ground::pointbystar(ground, 2, des, method);
    float point3 = Ground::addbyix(ground, point1, ground->m_group[des/10].m_item[des%10].i[1]);
    float point4 = point3 + point2 * checkBuff(ground);
    ground->m_group[des/10].m_item[des%10].j[2] += point4 - j23;
    ground->m_group[des/10].m_item[des%10].j[3] += point4 - j23;
    j23 = point4;
}

int Buff0130222::checkBuff(Ground* ground)
{
    int count = 0;
    bool b103 = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 1030122) //103
        {
            QSharedPointer<Buff1030122> buff = qSharedPointerCast<Buff1030122>(pbuff);
            count += buff->sizeoflayouts();
            b103 = true;
        }
    }
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (!b103 && pbuff->id == 102)
        {
            ++count;
        }
        if (pbuff->id == 106)
        {
            ++count;
        }
    }
    for (QSharedPointer<Buff> pbuff : ground->buff[1][des])
    {
        if (!b103 && pbuff->id == 111)
        {
            ++count;
        }
        if (pbuff->id == 104 || pbuff->id == 105)
        {
            ++count;
        }
    }
    if (count > 8)
    {
        count = 8;
    }
    return count;
}
