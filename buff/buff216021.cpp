#include "buff216021.h"
#include "ground.h"
#include "log/logger.h"

void Buff216021::run(Ground* ground, int count)
{
    if (count != 4)
    {
        return;
    }

    QVector<int> obj1 = Ground::selectObjN(ground, src, 0x1010);
    QVector<int> obj2 = Ground::selectObjN(ground, src, 0xA020);
    if (obj1.size() <= 0 || obj2.size() <= 0)
    {
        return;
    }
    Ground::run2223(ground, obj1[0], obj2[0], true, false);
}
