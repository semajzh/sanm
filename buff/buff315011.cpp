#include "buff315011.h"
#include "buff3150121.h"
#include "ground.h"
#include "log/logger.h"

void Buff315011::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0022);
    for (int obj : objs)
    {
        for (int n = 0; n < 3; ++n)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31501213(des, obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
            run(ground, check31501212(ground));
        }
    }
}

int Buff315011::check31501212(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013, des);
    for (int obj : objs)
    {
        for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
        {
            if (pbuff->id == 31501212)
            {
                return obj;
            }
        }
    }
    return -1;
}

void Buff315011::run(Ground* ground, int obj)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3150112(des, des, id));
    Ground::addBuff(ground, ground->buff[0][des], buff);

    if (obj >= 0 && obj/10 == des/10)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3150112(des, obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
}

void Buff3150112::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 15)
    {
        k0 += 1;
        j12 += 1;
        ground->m_group[des/10].m_item[des%10].k[0] += 1;
        ground->m_group[des/10].m_item[des%10].j[12] += 1;
    }
}

void Buff3150112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
}

void Buff3150112::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 15)
    {
        k0 += 1;
        j12 += 1;
        ground->m_group[des/10].m_item[des%10].k[0] += 1;
        ground->m_group[des/10].m_item[des%10].j[12] += 1;
    }
}
