#include "buff001100.h"
#include "ground.h"
#include "log/logger.h"

float Buff001100::run(Ground* ground, int pos)
{
    if (Ground::exsize(ground, pos) > 0)
    {
        return 8.0f;
    }
    return 0.0f;
}
