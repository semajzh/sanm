#include "buff4010820.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010820::run(Ground* ground)
{
    int r1 = check401081(ground, des) ? 2 : 3;
    int r2 = check401081(ground, des) ? 4 : 5;
    if (ground->m_round != r1 && ground->m_round != r2)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 340, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40108202(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

bool Buff4010820::check401081(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401081)
        {
            return true;
        }
    }
    return false;
}

void Buff40108202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    float point = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    i1 = Ground::addin(ground, des, 1, -point);
    i2 = Ground::addin(ground, des, 2, -point);
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff40108202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff40108202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff40108202::check4110121(Ground* ground)
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
