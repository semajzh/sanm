#include "buff1011320.h"
#include "buff013.h"
#include "ground.h"
#include "log/logger.h"

void Buff1011320::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i2 = Ground::pointbystar(ground, 30, src, method);
    Ground::addi2(ground, des, i2);
}

void Buff1011320::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
}

void Buff1011320::run(Ground* ground, int obj)
{
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10113202(des, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    float point1 = Ground::pointbystar(ground, 60, src, method);
    if (qrand() % 100 + 1 > 100 - point1)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff10113202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 10, src, method);
    l0 = point1 + ground->m_group[src/10].m_item[src%10].i[2] / 50; //
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    Ground::exenter(ground, src, des, id);
}

void Buff10113202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff10113202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffR::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
