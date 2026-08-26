#include "buff3011221.h"
#include "ground.h"
#include "log/logger.h"

void Buff3011221::run(Ground* ground, int a)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 40, src, method);
    if (a == 0)
    {
        Item& item1 = ground->m_group[src/10].m_item[src%10];
        Ground::hloi(ground, &item1, &ground->m_group[des/10].m_item[des%10], method, point1, item1.i[1] + item1.i[2]);
    }
    else
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30112212(src, des, method, 2));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    }
}

void Buff30112212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float point1 = Ground::pointbystar(ground, 14, src, method);
        float l = Ground::addln(ground, des, 0, -point1);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}

void Buff30112212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff30112212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float point1 = Ground::pointbystar(ground, 14, src, method);
        float l = Ground::addln(ground, des, 0, -point1);
        l0 += l;
        ground->m_group[des/10].m_item[des%10].l[0] += l;
    }
}
