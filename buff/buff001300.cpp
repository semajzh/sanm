#include "buff001300.h"
#include "ground.h"
#include "log/logger.h"

bool Buff001300::run(Ground* ground, int )
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        if (qrand() % 100 + 1 > 100 - 80)
        {
            return true;
        }
    }
    return false;
}
