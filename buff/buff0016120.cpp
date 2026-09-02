#include "buff0016120.h"
#include "ground.h"
#include "log/logger.h"

void Buff0016120::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 69)
    {
        return;
    }
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;
    Logger::H().printcustom(ground, 16120, des, 16120);
    Ground::run2223(ground, des, -1, true, false);
}
