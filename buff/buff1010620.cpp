#include "buff1010620.h"
#include "ground.h"
#include "log/logger.h"

void Buff1010620::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float point2 = Ground::pointbystar(ground, 80, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return;
    }

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    Item& item2 = ground->m_group[obj/10].m_item[obj%10];
    Ground::actbr(ground, &item1, &item2, 1010620, point2 + item1.i[2] / 40.33); //100=261,80=428(363.96)

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10106202(des, obj, 1010620, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}

void Buff10106202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    k0 = point1 + (check101061(ground, src) ? 10 : 0);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
    Ground::exenter(ground, src, des, id);
}

void Buff10106202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exexit(ground, src, des, id);
}

void Buff10106202::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff10106202::check101061(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 101061)
        {
            return true;
        }
    }
    return false;
}
