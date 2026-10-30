#include "buff4091424.h"
#include "ground.h"
#include "log/logger.h"

void Buff40914241::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        i0 += meta/1000.0f;
        i1 += meta/1000.0f;
        Ground::addin(ground, des, 0, meta/1000.0f);
        Ground::addin(ground, des, 1, meta/1000.0f);
    }
}

void Buff40914241::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
    Ground::addin(ground, des, 1, -i1, true);
}

void Buff40914241::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (++count <= 2)
    {
        i0 += meta/1000.0f;
        i1 += meta/1000.0f;
        Ground::addin(ground, des, 0, meta/1000.0f);
        Ground::addin(ground, des, 1, meta/1000.0f);
    }
}

void Buff40914242::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        i0 += Ground::addin(ground, des, 0, -meta/1000.0f);
        i1 += Ground::addin(ground, des, 1, -meta/1000.0f);
    }
    Ground::exenter(ground, src, des, id);
}

void Buff40914242::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
    Ground::addin(ground, des, 1, -i1, true);
    Ground::exexit(ground, src, des, id);
}

void Buff40914242::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (++count <= 2)
    {
        i0 += Ground::addin(ground, des, 0, -meta/1000.0f);
        i1 += Ground::addin(ground, des, 1, -meta/1000.0f);
    }
    Ground::exupdate(ground, src, des, id);
}
