#include "buff0140121.h"
#include "ground.h"
#include "log/logger.h"

void Buff0140121::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, des, method);
    float point2 = Ground::pointbystar(ground, 20, des, method);
    int count = check01401213(ground, des);
    float point = point1 + count * point2;
    QVector<int> objs = Ground::selectObjN(ground, des, 0xa011);
    for (int obj : objs)
    {
        Ground::hloi(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point, (ground->m_group[des/10].m_item[des%10].i[1]+ground->m_group[des/10].m_item[des%10].i[2])/2);
    }
}

void Buff0140121::run(Ground* ground, int )
{
    if (++count < 2)
    {
        return;
    }
    count = 0;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01401213(des, obj, id, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}

int Buff0140121::check01401213(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 1401213)
        {
            QSharedPointer<Buff01401213> buff = qSharedPointerCast<Buff01401213>(pbuff);
            return buff->num();
        }
    }
    return 0;
}

void Buff01401212::run(Ground* ground)
{
    check0140121(ground, src);
}

bool Buff01401212::check0140121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[4][obj])
    {
        if (pbuff->id == 140121)
        {
            QSharedPointer<Buff0140121> buff = qSharedPointerCast<Buff0140121>(pbuff);
            buff->run(ground, 1);
            return true;
        }
    }
    return false;
}

void Buff01401213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, des, method);
    if (count < 3)
    {
        ++count;
        i2 += point1;
        Ground::addi2(ground, des, point1);
    }
}

void Buff01401213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
}

void Buff01401213::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 24, des, method);
    if (count < 3)
    {
        ++count;
        i2 += point1;
        Ground::addi2(ground, des, point1);
    }
}
