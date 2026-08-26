#include "buff110011.h"
#include "ground.h"
#include "log/logger.h"

void Buff110011::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    Ground::hloi1(ground, &ground->m_group[src/10].m_item[src%10], &ground->m_group[des/10].m_item[des%10], method, 50);
}
