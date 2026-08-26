#include "buff401011.h"
#include "ground.h"
#include "log/logger.h"

void Buff401011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::addi2(ground, des, 30);
}

void Buff401011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -30);
}
