#include "buff0020820.h"
#include "ground.h"
#include "log/logger.h"

void Buff0020820::run(Ground* ground, int type)
{
    float point1 = Ground::pointbystar(ground, 16, src, method);
    if (count[type]++ < 8)
    {
        ground->m_group[des/10].m_item[des%10].i[type] += point1;
    }
}
