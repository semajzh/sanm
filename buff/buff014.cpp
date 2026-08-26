#include "buff014.h"
#include "ground.h"
#include "log/logger.h"

Buff014::Buff014(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 14;
    unsigned char ch[] = {0xe5, 0x98, 0xb2, 0xe8, 0xae, 0xbd};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff014::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff014::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff014::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
