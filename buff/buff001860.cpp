#include "buff001860.h"
#include "ground.h"
#include "log/logger.h"

void Buff001860::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 25)
    {
        return;
    }

    Ground::exremove(ground, des, 1);
}
