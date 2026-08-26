#include "buff303018.h"
#include "ground.h"
#include "log/logger.h"

float Buff303018::run(Ground* ground, int )
{
    Item& item = ground->m_group[src/10].m_item[src%10];
    if (item.h[0] < item.h[3] / 2)
    {
        return 0.0f;
    }
    float k = 15 + item.i[2] / 20;
    return k;
}
