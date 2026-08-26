#include "buff011.h"
#include "ground.h"
#include "log/logger.h"

Buff011::Buff011(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 11;
    unsigned char ch[] = {0xe9, 0x9c, 0x87, 0xe6, 0x85, 0x91};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff011::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
