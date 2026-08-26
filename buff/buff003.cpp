#include "buff003.h"
#include "ground.h"
#include "log/logger.h"

Buff003::Buff003(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 3;
    unsigned char ch[] = {0xe9, 0xa3, 0x8e, 0xe6, 0x9a, 0xb4};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff003::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].i[3] -= 30;
    Ground::exenter(ground, src, des, id);
}

void Buff003::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].i[3] += 30;
    Ground::exexit(ground, src, des, id);
}

void Buff003::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
