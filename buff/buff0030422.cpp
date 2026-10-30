#include "buff0030422.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff00304221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    if (count++ < 2)
    {
        Ground::addin(ground, des, 1, meta/1000.0f);
        Ground::addin(ground, des, 2, meta/1000.0f);
        data += meta/1000.0f;
    }
}

void Buff00304221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -data, true);
    Ground::addin(ground, des, 2, -data, true);
}

void Buff00304221::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (count++ < 2)
    {
        Ground::addin(ground, des, 1, meta/1000.0f);
        Ground::addin(ground, des, 2, meta/1000.0f);
        data += meta/1000.0f;
    }
}

void Buff00304222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i1 = Ground::addin(ground, des, 1, -meta/1000.0f);
    i2 = Ground::addin(ground, des, 2, -meta/1000.0f);
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff00304222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -i1, true);
    Ground::addin(ground, des, 2, -i2, true);
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff00304222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
