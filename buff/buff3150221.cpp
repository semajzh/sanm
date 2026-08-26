#include "buff3150221.h"
#include "buff315021.h"
#include "ground.h"
#include "log/logger.h"

void Buff31502211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l0 = -point2;
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff31502211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff31502211::run(Ground* ground, int obj, int m, float& point)
{
    if (point <= 0.08f * ground->m_group[des/10].m_item[des%10].h[0])
    {
        return;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 1)
    {
        return;
    }

    check315021(ground, src);

    float point1 = 0.33 * point;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013, des);
    for (int obj2 : objs)
    {
        Ground::actcd(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[obj2/10].m_item[obj2%10], m, point1);
        point -= point1;
    }
}

bool Buff31502211::check315021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 315021)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

void Buff31502212::run(Ground* ground)
{
    if (ground->m_round != 3)
    {
        return;
    }

    QVector<int> objs = selectObj(ground, des);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31502213(des, obj, method));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }
}

QVector<int> Buff31502212::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].f[1] != 1)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}

void Buff31502213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 15, src, method);
    k0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
}

void Buff31502213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff31502213::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 125, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0021);
    for (int obj : objs)
    {
        if (ground->m_group[des/10].m_item[des%10].i[1] > ground->m_group[des/10].m_item[des%10].i[0])
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        }
        else
        {
            Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        }
    }
}
