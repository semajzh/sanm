#include "buff001650.h"
#include "ground.h"
#include "log/logger.h"

float Buff001650::run(Ground* ground, int obj)
{
    QVector<int> objs = Ground::selectObjN(ground, obj, 0x9010);
    if (objs.size() > 0 && obj == objs.front())
    {
        return 7;
    }
    return 0;
}
