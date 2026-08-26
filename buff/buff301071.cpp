#include "buff301071.h"
#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

void Buff301071::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -7);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff301071::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff301071::run(Ground* ground)
{
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff015>(new Buff015(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
