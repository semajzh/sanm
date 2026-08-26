#include "buff201091.h"
#include "ground.h"
#include "log/logger.h"

void Buff201091::run(Ground* ground)
{
    if (ground->data[des].actcount[2223] - count < 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010912(des, des, method, 1));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    }
    count = ground->data[des].actcount[2223];
}

void Buff2010912::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j6 = 25;
    k5 = Ground::addkn(ground, des, 5, 25);
    ground->m_group[des/10].m_item[des%10].j[6] += j6;
    ground->m_group[des/10].m_item[des%10].k[5] += k5;
}

void Buff2010912::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[6] -= j6;
    ground->m_group[des/10].m_item[des%10].k[5] -= k5;
}
