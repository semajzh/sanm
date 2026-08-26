#include "buff4060221.h"
#include "ground.h"
#include "log/logger.h"

void Buff40602211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 80, src, method);
    i2 = point1 + ground->m_group[src/10].m_item[src%10].i[2] / 18;
    Ground::addi2(ground, des, i2);
}

void Buff40602211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -i2);
}

void Buff40602211::run(Ground* ground)
{
    if (ground->m_round > 4)
    {
        return;
    }
    Ground::addi2(ground, des, -15);
    i2 -= 15;
}

void Buff40602212::run(Ground* ground)
{
    if (ground->m_round != 4)
    {
        return;
    }
    QVector<int> objs = Ground::selectObjN(ground, des, 0x5010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40602213(des, obj, 4060221, 8));
        Ground::addBuff(ground, ground->buff[8][obj], buff);
    }
}

void Buff40602213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 15, src, method);
    k0 = point1 + ground->m_group[src/10].m_item[src%10].i[2] / 32;
    k0 = Ground::addkn(ground, des, 0, k0);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff40602213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff40602213::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 160, src, method);
    float point = point1 + ground->m_group[des/10].m_item[des%10].i[2] / 18;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}
