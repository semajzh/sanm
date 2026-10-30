#include "buff0018122.h"
#include "ground.h"
#include "log/logger.h"

void Buff0018122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addin(ground, des, 1, 23);
}

void Buff0018122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -23, true);
}
