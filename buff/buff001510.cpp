#include "buff001510.h"
#include "ground.h"
#include "log/logger.h"

void Buff001510::run(Ground* ground)
{
    if (ground->m_round == 2)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
        objs.insert(0, des);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001511(src, obj, 1510, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }
}

void Buff001511::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= 15;
}

void Buff001511::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] += 15;
}
