#include "buff112.h"
#include "ground.h"
#include "log/logger.h"

void Buff112::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
}

void Buff112::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff112::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
}
