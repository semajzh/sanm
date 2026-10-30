#include "buff401082.h"
#include "ground.h"
#include "log/logger.h"

void Buff401082::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addin(ground, des, 0, 20);
    Ground::addin(ground, des, 3, 20);
}

void Buff401082::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -20, true);
    Ground::addin(ground, des, 3, -20, true);
}
