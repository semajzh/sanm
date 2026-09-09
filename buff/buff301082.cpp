#include "buff301082.h"
#include "ground.h"
#include "log/logger.h"

void Buff301082::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 30)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0xA021);
    for (int obj : objs)
    {
        Logger::H().printcustom("[301082] 2223\n");
        Ground::run2223(ground, des, obj, false, false);
    }
}
