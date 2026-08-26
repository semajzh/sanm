#include "buff1091321.h"
#include "ground.h"
#include "log/logger.h"

void Buff10913211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j8 = 40 + ground->m_group[src/10].m_item[src%10].i[2] / 20;
    k8 = 40 + ground->m_group[src/10].m_item[src%10].i[2] / 20;
    ground->m_group[des/10].m_item[des%10].j[8] += j8;
    ground->m_group[des/10].m_item[des%10].k[8] += k8;
}

void Buff10913211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[8] -= j8;
    ground->m_group[des/10].m_item[des%10].k[8] -= k8;
}

void Buff10913211::run(Ground* ground, int obj)
{
    if (qrand() % 100 + 1 <= 100 - 65)
    {
        return;
    }
    Ground::run3332(ground, src, obj, false);
}

void Buff10913212::run(Ground* ground, int& obj)
{
    if (qrand() % 100 + 1 <= 100 - 80 - ground->m_group[src/10].m_item[src%10].i[2]/20)
    {
        return;
    }
    Logger::H().printcustom("2223 %02d->%02d\n", obj, meta);
    obj = meta;
}
