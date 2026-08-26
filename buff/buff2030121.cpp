#include "buff2030121.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff20301211::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    if (qrand() % 100 + 1 <= 100 - point1 - ground->m_group[des/10].m_item[des%10].i[1] / 30)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x12 + qrand() % 2);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20301213(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff20301212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
}

void Buff20301212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff20301212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 120, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x12);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &(ground->m_group[des/10].m_item[des%10]), &(ground->m_group[obj/10].m_item[obj%10]), method, point1);
    }
}

void Buff20301213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 18, src, method);
    j9 = Ground::addj9(ground, des, 9, point1 + ground->m_group[src/10].m_item[src%10].i[1] / 100);
    ground->m_group[des/10].m_item[des%10].j[9] += j9;
}

void Buff20301213::exit(Ground* ground)
{
    ground->m_group[des/10].m_item[des%10].j[9] -= j9;
}
