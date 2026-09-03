#include "buff101022.h"
#include "ground.h"
#include "log/logger.h"

bool Buff101022::run(Ground* ground, int )
{
    float point1 = Ground::addbyix(ground, 18, ground->m_group[src/10].m_item[src%10].i[0]);
    return (qrand() % 100 + 1 > 100 - point1);
}
