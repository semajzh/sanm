#include "buff407021.h"
#include "buff005.h"
#include "ground.h"
#include "log/logger.h"

void Buff407021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k2 = Ground::addkn(ground, des, 2, 7);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff407021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff407021::run(Ground* ground, int obj)
{
    if (qrand() % 100 + 1 <= 100 - 50 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff005(des, obj, 4070221, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}
