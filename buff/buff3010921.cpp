#include "buff3010921.h"
#include "buff102.h"
#include "buff004.h"
#include "ground.h"
#include "log/logger.h"

void Buff30109211::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 25, src, method);
    float jl = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[3][des], buff);
}

void Buff30109212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
}

void Buff30109212::run(Ground* ground)
{
    if (ground->m_round != 4)
    {
        return;
    }

    i2 = Ground::pointbystar(ground, 40, src, method);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
