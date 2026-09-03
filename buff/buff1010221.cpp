#include "buff1010221.h"
#include "buff101022.h"
#include "ground.h"
#include "log/logger.h"

void Buff10102211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j4 = Ground::pointbystar(ground, 6, src, method);
    ground->m_group[des/10].m_item[des%10].j[4] += j4;
}

void Buff10102211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[4] -= j4;
}

bool Buff10102212::run(Ground* ground, int m)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        method22 = 0;
    }

    float point1 = Ground::pointbystar(ground, 70, src, method);

    if (method22 == 0 && qrand() % 100 + 1 > 100 - point1)
    {
        method22 = m;
        Logger::H().printcustom(ground, 1010221, des, 1010221, method);
        return true;
    }

    if (method22 == m && check101022(ground, des))
    {
        method22 = -1;
        Logger::H().printcustom(ground, 101022, des, 101022, method);
        return true;
    }

    return false;
}

bool Buff10102212::check101022(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 101022)
        {
            QSharedPointer<Buff101022> buff = qSharedPointerCast<Buff101022>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return false;
}
