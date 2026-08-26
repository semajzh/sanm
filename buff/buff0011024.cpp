#include "buff0011024.h"
#include "ground.h"
#include "log/logger.h"

void Buff0011024::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
}

void Buff0011024::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
}

void Buff0011024::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    ++count;
}

int Buff0011024::run(Ground* , int max)
{
    return ((count > max) ? max : count);
}
