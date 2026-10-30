#include "buff0014024.h"
#include "ground.h"
#include "log/logger.h"

void Buff0014024::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i3 = Ground::pointbystar(ground, 30, src, method);
    Ground::addin(ground, des, 3, i3);
}

void Buff0014024::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 3, -i3, true);
}
