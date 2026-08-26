#include "buff411021.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

float Buff411021::run(Ground* ground, int obj)
{
    return check020(ground, obj) ? 6 : 0;
}

bool Buff411021::check020(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 20)
        {
            return true;
        }
    }
    return false;
}
