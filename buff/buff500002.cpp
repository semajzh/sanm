#include "buff500002.h"
#include "ground.h"
#include "log/logger.h"

void Buff500002::run(Ground* ground, int obj)
{
    float point = 1000;
    point *= (qrand() % 100 + 1 > 100 - ground->m_group[des/10].m_item[des%10].j[0]) ? ground->m_group[des/10].m_item[des%10].j[1]/100 : 1;
    Ground::actcd(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
}
