#include "buff0011721.h"
#include "ground.h"
#include "log/logger.h"

bool Buff0011721::run(Ground* ground, float& point)
{
    if (ground->m_round < 3 || round == ground->m_round)
    {
        return false;
    }
    float point1 = Ground::pointbystar(ground, 80, src, method);
    if (qrand() % 100 + 1 <= 100 - point1)
    {
        return false;
    }
    round = ground->m_round;
    point = Ground::pointbystar(ground, 40, src, method);;
    return true;
}
