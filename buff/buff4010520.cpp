#include "buff4010520.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010520::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    l10 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
    l10 = Ground::addln(ground, des, 10, -l10);
    ground->m_group[des/10].m_item[des%10].l[10] += l10;
}

void Buff4010520::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[10] -= l10;
}

void Buff4010520::run(Ground* ground, int obj)
{
    if (obj < 0)
    {
        return;
    }
    if (round != ground->m_round)
    {
        objs.clear();
        round = ground->m_round;
    }
    objs.insert(obj);
}

void Buff4010520::run(Ground* ground)
{
    int obj = selectObjMaxi0(ground, des);
    if (obj < 0)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40105202(des, obj, method));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    bool b401058 = check401058(ground, des);
    bool b2223 = false;
    if (b401058)
    {
        Logger::H().printcustom(ground, 401058, obj);
        float maxi = Ground::getMaxi(ground, des);
        float jl = Ground::addbyix(ground, 40, maxi);
        b2223 = qrand() % 100 + 1 > 100 - jl;
    }
    float point1 = Ground::pointbystar(ground, 60, src, method);
    for (int obj2 : objs)
    {
        if (!b401058)
        {
            Ground::actbr(ground, &ground->m_group[obj/10].m_item[obj%10], &ground->m_group[obj2/10].m_item[obj2%10], method, point1, true, -999);
        }
        else if (b2223)
        {
            Ground::run2223(ground, obj, obj2, true, false);
        }
    }
}

int Buff4010520::selectObjMaxi0(Ground* ground, int obj)
{
    int g = obj / 10;
    int max = 0;
    int obj2 = -1;
    for (int i = 0; i < 3; ++i)
    {
        if (g*10+i == obj)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[0] > max)
        {
            max = ground->m_group[g].m_item[i].i[0];
            obj2 = g*10+i;
        }
    }
    return obj2;
}

bool Buff4010520::check401058(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401058)
        {
            return true;
        }
    }
    return false;
}

void Buff40105202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 15, src, method);
    k1 = Ground::addkn(ground, des, 1, point1);
    ground->m_group[des/10].m_item[des%10].k[1] += k1;
}

void Buff40105202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[1] -= k1;
}
