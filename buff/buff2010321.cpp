#include "buff2010321.h"
#include "ground.h"
#include "log/logger.h"

void Buff2010321::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j12 = Ground::pointbystar(ground, 24, src, method);
    ground->m_group[des/10].m_item[des%10].j[12] += j12;
}

void Buff2010321::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
}

void Buff2010321::run(Ground* ground, int type)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
        countex = 0;
    }

    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    if (count < 5)
    {
        ++count;
    }
    else if (type == 0 && countex < 3 && check201032(ground))
    {
        ++countex;
    }
    else
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 80, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

bool Buff2010321::check201032(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 201032)
        {
            return true;
        }
    }
    return false;
}
