#include "buff0080324.h"
#include "ground.h"
#include "log/logger.h"

void Buff0080324::enter(Ground* ground)
{
    round = ground->m_round;
}

void Buff0080324::update(Ground* ground, QSharedPointer<Buff> buff)
{
    BuffC::update(ground, buff);
    round = ground->m_round;
}

bool Buff0080324::run(Ground* ground, int )
{
    if (round < ground->m_round - 1)
    {
        return false;
    }
    return true;
}
