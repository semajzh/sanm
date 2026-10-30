#include "buff0020820.h"
#include "ground.h"
#include "log/logger.h"

void Buff0020820::run(Ground* ground, int type)
{
    float point1 = Ground::pointbystar(ground, 16, src, method);
    if (count[type]++ < 8)
    {
        Ground::addin(ground, des, type, point1);
    }
}
