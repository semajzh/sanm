#include "buff303012.h"
#include "ground.h"
#include "log/logger.h"

float Buff3030122::run(Ground* , int )
{
    if (count1 > 0)
    {
        return 0;
    }
    ++count1;
    return 20;
}

void Buff3030122::run(Ground* ground, float point)
{
    if (count2 > 0)
    {
        return;
    }
    ++count2;

    Ground::hlo(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[src/10].m_item[src%10], method, point * 0.5f);
}
