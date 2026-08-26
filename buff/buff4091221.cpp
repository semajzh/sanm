#include "buff4091221.h"
#include "ground.h"
#include "log/logger.h"

void Buff4091221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    // 203.19, 20=>24.22
    float point = 20 + ground->m_group[src/10].m_item[src%10].i[2] / 50; //
    l0 = Ground::addln(ground, des, 0, -point);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff4091221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff40912212::run(Ground* ground)
{
    if (des == src)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40912213(src, des, method, 1));
    Ground::addBuff(ground, ground->buff[0][des], buff);
}

void Buff40912212::run(Ground* ground, int)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40912214(src, src, method));
    Ground::addBuff(ground, ground->buff[0][src], buff);
}

void Buff40912213::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        // 203.19, 10=>12.46
        // 174.85, 10=>12.12
        float point = 10 + ground->m_group[src/10].m_item[src%10].i[2] / 82.6; //
        float k = Ground::addkn(ground, des, 0, point);
        float l = Ground::addln(ground, des, 0, -point);
        k0 += k;
        l0 += l;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff40912213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff40912213::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        // 203.19, 10=>12.46
        float point = 10 + ground->m_group[src/10].m_item[src%10].i[2] / 82.6; //
        float k = Ground::addkn(ground, des, 0, point);
        float l = Ground::addln(ground, des, 0, -point);
        k0 += k;
        l0 += l;
        ground->m_group[des/10].m_item[des%10].k[0] += k;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff40912214::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count >= 3)
    {
        count = 0;
        QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40912215(src, obj, method, 2));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
        }
    }
}

void Buff40912214::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count >= 3)
    {
        count = 0;
        QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40912215(src, obj, method, 2));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
        }
    }
}

void Buff40912215::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    // 174.85, 15=>18.03
    l0 = 15 + ground->m_group[src/10].m_item[src%10].i[2] / 57.7; //
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff40912215::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
