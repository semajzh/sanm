#include "buff101.h"
#include "ground.h"
#include "log/logger.h"

void Buff101::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
}

void Buff101::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff101::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    meta += buff->meta;
}

int Buff101::run(Ground* , int )
{
    if (meta > 0)
    {
        --meta;
    }
    return meta;
}
