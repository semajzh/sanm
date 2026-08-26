#include "buff301011.h"
#include "ground.h"
#include "log/logger.h"

void Buff301011::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010112(des, obj, 301011, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff3010112::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff3010112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
