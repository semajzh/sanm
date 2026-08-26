#include "buff002.h"
#include "buff2100121.h"
#include "ground.h"
#include "log/logger.h"

Buff002::Buff002(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 2;
    unsigned char ch[] = {0xe7, 0x95, 0x8f, 0xe6, 0x83, 0xa7};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff002::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].l[0] += 10;
    Ground::exenter(ground, src, des, id);

    check2100121(ground, src, des);
}

void Buff002::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    ground->m_group[des/10].m_item[des%10].l[0] -= 10;
    Ground::exexit(ground, src, des, id);
}

void Buff002::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);

    check2100121(ground, src, des);
}

bool Buff002::check2100121(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 21001211)
        {
            QSharedPointer<Buff21001211> buff = qSharedPointerCast<Buff21001211>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}
