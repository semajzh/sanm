#include "buff210011.h"
#include "buff023.h"
#include "ground.h"
#include "log/logger.h"

float Buff210011::run(Ground* ground, int obj)
{
    int count = check023(ground, obj);
    float point1 = Ground::addbyix(ground, 5, count, 5);
    float point2 = point1 * (src == des ? 1.0f : 0.5f);
    return -point2;
}

int Buff210011::check023(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 23)
        {
            QSharedPointer<Buff023> buff = qSharedPointerCast<Buff023>(pbuff);
            return buff->num();
        }
    }
    return 0;
}
