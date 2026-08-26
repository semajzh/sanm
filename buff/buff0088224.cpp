#include "buff0088224.h"
#include "ground.h"
#include "log/logger.h"

void Buff0088224::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
}

void Buff0088224::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
}

void Buff0088224::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (count >= 6)
    {
        return;
    }
    ++count;
}

int Buff0088224::run(Ground* , int )
{
    return count;
}
