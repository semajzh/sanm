#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

Buff015::Buff015(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 15;
    unsigned char ch[] = {0xe6, 0x96, 0xad, 0xe7, 0xb2, 0xae};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff015::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff015::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff015::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
