#include "buff0080222.h"
#include "ground.h"
#include "log/logger.h"

void Buff0080222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
}

void Buff0080222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    count = 0;
}

void Buff0080222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    ++count;
}

bool Buff0080222::run(Ground* , int n)
{
    return (count >= n);
}
