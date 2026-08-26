#include "buff0020721.h"
#include "ground.h"
#include "buff014.h"
#include "log/logger.h"

void Buff0020721::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    i2 = ground->m_group[des/10].m_item[des%10].i[2] * point1/100;
    Ground::addi2(ground, des, i2);
}

void Buff0020721::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -i2);
}

void Buff0020721::run(Ground* ground)
{
    if (ground->m_round < 2)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 60, src, method);
    if (qrand() % 100 + 1 <= 100 - point1 - ground->m_group[des/10].m_item[des%10].i[2] / 30)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22 + qrand() % 2);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
