#include "buff301131.h"
#include "ground.h"
#include "log/logger.h"

void Buff301131::run(Ground* ground, int obj)
{
    if (obj/10 != des/10)
    {
        return;
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3011312(des, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff3011312::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -12);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff3011312::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
