#include "buff301012.h"
#include "ground.h"
#include "log/logger.h"

void Buff301012::run(Ground* ground)
{
    if (ground->m_round % 2 == 0)
    {
        Ground::exremove(ground, des, 1);
    }
}
