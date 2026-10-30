#include "buff001400.h"
#include "ground.h"
#include "log/logger.h"

void Buff001400::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addin(ground, des, 2, 15);
}

void Buff001400::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 2, -15, true);
}

