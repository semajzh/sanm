#include "buff0017522.h"
#include "ground.h"
#include "log/logger.h"

void Buff0017522::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i3 = Ground::addin(ground, des, 3, -28.75f);
}

void Buff0017522::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 3, -i3, true);
}
