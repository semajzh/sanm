#include "buff301111.h"
#include "ground.h"
#include "log/logger.h"

void Buff301111::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 65)
    {
        return;
    }

    Ground::exremove(ground, des, 1);
}
