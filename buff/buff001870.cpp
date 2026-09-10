#include "buff001870.h"
#include "ground.h"
#include "log/logger.h"

void Buff001870::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0018702(des, des, id, 1));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff0018702::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        float k = Ground::addkn(ground, des, 4, 10);
        k4 += k;
        ground->m_group[des/10].m_item[des%10].k[4] += k;
    }
}

void Buff0018702::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[4] -= k4;
}

void Buff0018702::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 2)
    {
        float k = Ground::addkn(ground, des, 4, 10);
        k4 += k;
        ground->m_group[des/10].m_item[des%10].k[4] += k;
    }
}
