#include "buff0014120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014120::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 10)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 40, src, method);

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item1, method, point1, (item1.i[1] + item1.i[2])/2);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00141202(des, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff00141202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count > 4)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float l = Ground::addln(ground, des, 0, -point1);
    ground->m_group[des/10].m_item[des%10].l[0] += l;
    l0 += l;
}

void Buff00141202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff00141202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count > 4)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float l = Ground::addln(ground, des, 0, -point1);
    ground->m_group[des/10].m_item[des%10].l[0] += l;
    l0 += l;
}
