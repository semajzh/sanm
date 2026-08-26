#include "buff401037.h"
#include "ground.h"
#include "log/logger.h"

float Buff401037::run(Ground* ground, int obj)
{
    float k = 15 + ground->m_group[src/10].m_item[src%10].i[3] / 30; //284.77,15,24
    return (check005(ground, obj) ? 0 : k);
}

bool Buff401037::check005(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 5)
        {
            return false;
        }
    }
    return true;
}
