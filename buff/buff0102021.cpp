#include "buff0102021.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff0102021::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(src, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff0102021::run(Ground* ground, int id)
{
    if (id > 0 && id < 100)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01020212(src, des, method, 1));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    }

    if (qrand() % 100 + 1 > 100 - 25)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01020213(src, obj, method));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
        }
    }
}

void Buff01020212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -8);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff01020212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff01020212::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 2)
    {
        float l = Ground::addln(ground, des, 0, -8);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff01020213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 0, 5);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}

void Buff01020213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff01020213::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 5)
    {
        float k = Ground::addkn(ground, des, 0, 5);
        k0 += k;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
    }
}
