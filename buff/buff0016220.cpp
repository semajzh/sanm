#include "buff0016220.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0016220::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] += 23;
}

void Buff0016220::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= 23;
}

void Buff0016220::run(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    Ground::hloi(ground, &item1, &item1, method, 126.5f, item1.i[1] + item1.i[0]);
}
