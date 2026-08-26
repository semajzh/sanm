#include "buff004.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

Buff004::Buff004(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 4;
    unsigned char ch[] = {0xe6, 0xb4, 0xaa, 0xe6, 0xb0, 0xb4};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff004::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i2 = ground->m_group[des/10].m_item[des%10].i[2] > 20 ? 20 : ground->m_group[des/10].m_item[des%10].i[2];
    i2 = Ground::addin(ground, des, 2, -i2);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff004::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff004::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
