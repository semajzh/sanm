#include "buff0016820.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0016820::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item1, method, 161, item1.i[1] + item1.i[2]);
}
