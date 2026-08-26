#include "buff001440.h"
#include "ground.h"
#include "log/logger.h"

bool Buff001440::run(Ground* ground, int obj)
{
    if (obj >= 0 && ground->m_group[obj/10].m_item[obj%10].h[0] > 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001441(src, obj, 1440));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
    return true;
}

void Buff001441::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        l0 += 1;
        ground->m_group[des/10].m_item[des%10].l[0] += 1;
    }
}

void Buff001441::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff001441::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        l0 += 1;
        ground->m_group[des/10].m_item[des%10].l[0] += 1;
    }
}
