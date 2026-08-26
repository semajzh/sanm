#include "buff303016.h"
#include "ground.h"
#include "log/logger.h"

void Buff303016::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    float jl = 50 + item1.i[2] / 20;
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }
    Ground::hloi(ground, &item1, &item1, 303016, 40, item1.i[2]);
}
