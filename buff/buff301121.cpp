#include "buff301121.h"
#include "ground.h"
#include "log/logger.h"

void Buff301121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}

void Buff301121::run(Ground* ground)
{
    if (count < 1)
    {
        return;
    }
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    if (item1.h[0] >= item1.h[3] * 0.5f)
    {
        return;
    }
    count = 0;

    Ground::hloi(ground, &item1, &item1, method, 200, item1.i[1] + item1.i[2]);
    l0 = Ground::addln(ground, des, 0, -12);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}
