#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

Buff017::Buff017(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 17;
    unsigned char ch[] = {0xe6, 0xb7, 0xb7, 0xe4, 0xb9, 0xb1};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff017::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff017::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff017::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
