#include "buff301102.h"
#include "ground.h"
#include "log/logger.h"

void Buff301102::run(Ground* ground)
{
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], 301102, 100);
    }
}
