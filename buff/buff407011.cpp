#include "buff407011.h"
#include "buff012.h"
#include "ground.h"
#include "log/logger.h"

void Buff407011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addln(ground, des, 1, -7);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff407011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

void Buff407011::run(Ground* ground)
{
    if (ground->m_round != 1)
    {
        return;
    }

    if (qrand() % 100 + 1 <= 100 - 60 - ground->m_group[src/10].m_item[src%10].i[2] / 30)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(des, obj, 407011, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
