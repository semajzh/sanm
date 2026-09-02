#include "buff0017322.h"
#include "ground.h"
#include "log/logger.h"

void Buff0017322::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i2 = Ground::pointbystar(ground, 36, src, method);
    Ground::addi2(ground, des, i2);
}

void Buff0017322::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -i2);
}
