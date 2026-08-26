#include "buff201111.h"
#include "ground.h"
#include "log/logger.h"

void Buff201111::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addi2(ground, des, 15);
}

void Buff201111::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -15);
}
