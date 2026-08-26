#include "buff201072.h"
#include "ground.h"
#include "log/logger.h"

void Buff201072::run(Ground* ground, int obj)
{
    if (ground->m_round % 2 == 0 || round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;

    Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 100);
}
