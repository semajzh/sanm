#include "buff005.h"
#include "ground.h"
#include "log/logger.h"

Buff005::Buff005(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 5;
    unsigned char ch[] = {0xe5, 0xa6, 0x96, 0xe6, 0x9c, 0xaf};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff005::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] -= 15;
    ground->m_group[des/10].m_item[des%10].j[3] -= 15;
    Ground::exenter(ground, src, des, id);

    check401101(ground, des);
}

void Buff005::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] += 15;
    ground->m_group[des/10].m_item[des%10].j[3] += 15;
    Ground::exexit(ground, src, des, id);
}

void Buff005::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);

    check401101(ground, des);
}

bool Buff005::check401101(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401101)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}
