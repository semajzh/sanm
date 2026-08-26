#include "buff016.h"
#include "ground.h"
#include "log/logger.h"

Buff016::Buff016(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 16;
    unsigned char ch[] = {0xe8, 0x99, 0x9a, 0xe5, 0xbc, 0xb1};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff016::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff016::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff016::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

void Buff016::run(Ground* , float& point)
{
    point *= 0.3f;
}
