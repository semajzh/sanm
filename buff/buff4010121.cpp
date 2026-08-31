#include "buff4010121.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010121::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40101212(des, obj, 40101212, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x13, des);
    for (int obj : objs2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40101212(des, obj, 40101212, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40101213(des, des, 40101213, 1, objs.size()+objs2.size()));
    Ground::addBuff(ground, ground->buff[6][des], buff);

    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

void Buff40101212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float point2 = Ground::pointbystar(ground, 10, src, method, -1);
    float point = point1 * (check401011(ground, src) ? 1.6 : 1);
    i2 = point * (1 - (ground->m_round - 1) * point2/100);
    i2 = Ground::addin(ground, des, 2, -i2);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff40101212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff40101212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff40101212::check401011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401011)
        {
            return true;
        }
    }
    return false;
}

bool Buff40101212::check4110121(Ground* ground)
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

void Buff40101213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    float point2 = Ground::pointbystar(ground, 10, src, method, -1);
    float point = point1 * (check401011(ground, src) ? 1.6 : 1);
    i2 = meta * (point * (1 - (ground->m_round - 1) * point2/100));
    Ground::addi2(ground, des, i2);
}

void Buff40101213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -i2);
}

bool Buff40101213::check401011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401011)
        {
            return true;
        }
    }
    return false;
}
