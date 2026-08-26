#include "buff0101021.h"
#include "ground.h"
#include "log/logger.h"

void Buff0101021::run(Ground* ground, float point)
{
    if (ground->m_round < 4)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        float p = point * Ground::addbyix(ground, 15, ground->m_group[des/10].m_item[des%10].i[1])/100;
        Ground::hlo(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, p);
    }
}

void Buff01010212::run(Ground* ground)
{
    int obj = check0101021(ground, src);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01010213(src, des, method));
        Ground::addBuff(ground, ground->buff[0][des], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff01010214(src, obj, method));
        Ground::addBuff(ground, ground->buff[0][obj], buff2);
    }
}

int Buff01010212::check0101021(Ground *ground, int obj)
{
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        for (QSharedPointer<Buff> pbuff : ground->buff[3][g*10+i])
        {
            if (pbuff->id == 101021)
            {
                return g*10+i;
            }
        }
    }
    return -1;
}

void Buff01010213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 += 3;
    ground->m_group[des/10].m_item[des%10].k[0] -= 3;
    Ground::exenter(ground, src, des, id);
}

void Buff01010213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exexit(ground, src, des, id);
}

void Buff01010213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    k0 += 3;
    ground->m_group[des/10].m_item[des%10].k[0] -= 3;
    Ground::exupdate(ground, src, des, id);
}

void Buff01010214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float k = Ground::addkn(ground, des, 0, 3);
    k0 += k;
    ground->m_group[des/10].m_item[des%10].k[0] += k;
}

void Buff01010214::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff01010214::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float k = Ground::addkn(ground, des, 0, 3);
    k0 += k;
    ground->m_group[des/10].m_item[des%10].k[0] += k;
}
