#include "buff1090121.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff10901211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    l0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]); //149.24, 4=>7.08
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    Ground::exenter(ground, src, des, 10901211);
}

void Buff10901211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, 10901211);
}

void Buff10901212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float l = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l = Ground::addln(ground, des, 0, -l);
    l0 += l;
    ground->m_group[des/10].m_item[des%10].l[0] += l;
}

void Buff10901212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff10901212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float l = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l = Ground::addln(ground, des, 0, -l);
    l0 += l;
    ground->m_group[des/10].m_item[des%10].l[0] += l;
}

void Buff10901213::run(Ground* ground)
{
    int mask = check109011(ground, src) ? 0x23 : 0x22;
    QVector<int> objs = Ground::selectObjN(ground, des, mask);
    for (int obj : objs)
    {
        float point1 = 10 * (check109011(ground, src) ? 0.8f : 1.0f);
        float point2 = Ground::pointbystar(ground, point1, src, method);
        float point3 = Ground::addbyix(ground, point2, ground->m_group[src/10].m_item[src%10].i[1]);
        int point4 = point3 * 1000;

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10901214(src, obj, id, point4));
        Ground::addBuff(ground, ground->buff[0][obj], buff);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff10901215(src, des, id, point4));
        Ground::addBuff(ground, ground->buff[0][des], buff1);
    }
}

bool Buff10901213::check109011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 109011)
        {
            return true;
        }
    }
    return false;
}

void Buff10901214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = meta / 1000.0f;
    float point2 = Ground::addin(ground, des, 1, -point1);
    i1 += point2;
    ground->m_group[des/10].m_item[des%10].i[1] += point2;
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff10901214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff10901214::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    meta = buff->meta;
    float point1 = meta / 1000.0f;
    float point2 = Ground::addin(ground, des, 1, -point1);
    i1 += point2;
    ground->m_group[des/10].m_item[des%10].i[1] += point2;
    check4110121(ground);
    Ground::exupdate(ground, src, des, id);
}

bool Buff10901214::check4110121(Ground* ground)
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

void Buff10901215::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = meta / 1000.0f;
    i1 += point1;
    ground->m_group[des/10].m_item[des%10].i[1] += point1;
}

void Buff10901215::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
}

void Buff10901215::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    meta = buff->meta;
    float point1 = meta / 1000.0f;
    i1 += point1;
    ground->m_group[des/10].m_item[des%10].i[1] += point1;
}
