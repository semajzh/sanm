#include "buff4130220.h"
#include "buff413021.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff4130220::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 2)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, des));
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }

    int n = qrand() % 2 + 1;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x20 + n);
    for (int obj : objs)
    {
        float point3 = Ground::pointbystar(ground, 80, src, method);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41302202(des, obj, id, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff41302203(des, des, id, 1));
        Ground::addBuff(ground, ground->buff[6][des], buff2);

        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point3);
    }

    check413021(ground);
}

bool Buff4130220::check413021(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 413021)
        {
            QSharedPointer<Buff413021> buff = qSharedPointerCast<Buff413021>(pbuff);
            buff->run(ground);
            return true;
        }
    }
    return false;
}

void Buff41302202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float maxi = 0;
    int index = 0;
    for (int n = 0; n < 4; ++n)
    {
        if (maxi < ground->m_group[des/10].m_item[des%10].i[n])
        {
            maxi = ground->m_group[des/10].m_item[des%10].i[n];
            index = n;
        }
    }
    float point1 = Ground::pointbystar(ground, 6, src, method);
    float point2 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
    float point3 = Ground::addin(ground, des, index, -maxi*point2/100);
    i[index] += point3;
    Buff020::check020(ground, src, des, true);
    ground->m_group[des/10].m_item[des%10].i[index] += point3;
    float point4 = Ground::pointbystar(ground, 8, src, method);
    l0 += point4;
    ground->m_group[des/10].m_item[des%10].l[0] += point4;
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff41302202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        ground->m_group[des/10].m_item[des%10].i[n] -= i[n];
    }
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff41302202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float maxi = 0;
    int index = 0;
    for (int n = 0; n < 4; ++n)
    {
        if (maxi < ground->m_group[des/10].m_item[des%10].i[n])
        {
            maxi = ground->m_group[des/10].m_item[des%10].i[n];
            index = n;
        }
    }
    float point1 = Ground::pointbystar(ground, 6, src, method);
    float point2 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
    float point3 = Ground::addin(ground, des, index, -maxi*point2/100);
    i[index] += point3;
    Buff020::check020(ground, src, des, true);
    ground->m_group[des/10].m_item[des%10].i[index] += point3;
    float point4 = Ground::pointbystar(ground, 8, src, method);
    l0 += point4;
    ground->m_group[des/10].m_item[des%10].l[0] += point4;
    check4110121(ground);
    Ground::exupdate(ground, src, des, id);
}

bool Buff41302202::check4110121(Ground* ground)
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

void Buff41302203::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = Ground::addln(ground, des, 0, -point1);
    l0 += point2;
    ground->m_group[des/10].m_item[des%10].l[0] += point2;
}

void Buff41302203::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff41302203::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 8, src, method);
    float point2 = Ground::addln(ground, des, 0, -point1);
    l0 += point2;
    ground->m_group[des/10].m_item[des%10].l[0] += point2;
}
