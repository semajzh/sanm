#include "buff0140221.h"
#include "ground.h"
#include "log/logger.h"

void Buff0140221::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0012);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01402212(src, obj, 1402212));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

void Buff01402212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 2, des, method);
    if (++count <= 15)
    {
        j2 += point1;
        ground->m_group[des/10].m_item[des%10].j[2] += point1;
    }
}

void Buff01402212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[2] -= j2;
}

void Buff01402212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 2, des, method);
    if (++count <= 15)
    {
        j2 += point1;
        ground->m_group[des/10].m_item[des%10].j[2] += point1;
    }
}
