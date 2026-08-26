#include "buff301082.h"
#include "ground.h"
#include "log/logger.h"

void Buff301082::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 30)
    {
        return;
    }

    Logger::H().printcustom("[301082] 2223\n");
    Ground::run2223(ground, des, -1, false, false);
}
