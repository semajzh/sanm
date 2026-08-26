#include "buff1010420.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff1010420::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float point2 = Ground::pointbystar(ground, 15, src, method, -1);
    i0 = point1;
    i3 = point1;
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
    ground->m_group[des/10].m_item[des%10].i[3] += i3;
    ground->m_group[des/10].m_item[des%10].j[7] += 100;

    i2 = Ground::addin(ground, des, 2, -point2);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff1010420::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[3] -= i3;
    ground->m_group[des/10].m_item[des%10].j[7] -= 100;

    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

bool Buff1010420::check4110121(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 41101212)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

void Buff1010420::run(Ground* ground)
{
    if (++count < 4)
    {
        return;
    }

    count = 0;
    QVector<int> objs = Ground::selectObjN(ground, src, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10104203(src, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

void Buff10104202::run(Ground* ground)
{
    check1010420(ground, src);
}

bool Buff10104202::check1010420(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1010420)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

void Buff10104203::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float j = Ground::addbyix(ground, 2, ground->m_group[src/10].m_item[src%10].i[0]);
    j13 += j;
    ground->m_group[des/10].m_item[des%10].j[13] += j;
}

void Buff10104203::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[13] -= j13;
}

void Buff10104203::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float j = Ground::addbyix(ground, 2, ground->m_group[src/10].m_item[src%10].i[0]);
    j13 += j;
    ground->m_group[des/10].m_item[des%10].j[13] += j;
}
