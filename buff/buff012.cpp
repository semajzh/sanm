#include "buff012.h"
#include "ground.h"
#include "log/logger.h"

Buff012::Buff012(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 12;
    unsigned char ch[] = {0xe6, 0x8a, 0x80, 0xe7, 0xa9, 0xb7};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff012::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff012::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff012::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
