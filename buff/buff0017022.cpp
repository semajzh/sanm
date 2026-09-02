#include "buff0017022.h"
#include "ground.h"
#include "log/logger.h"

void Buff0017022::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addi2(ground, des, 18.4f);
}

void Buff0017022::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -18.4f);
}
