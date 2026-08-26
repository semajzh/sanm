#include "buff401021.h"
#include "ground.h"
#include "log/logger.h"

void Buff401021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addln(ground, des, 1, -7);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
}

void Buff401021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
}

void Buff401021::run(Ground* ground)
{
    if (ground->m_round == 2)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 0x1020);
        for (int obj : objs)
        {
            Ground::run2223(ground, des, obj, true, false);
            Ground::run2223(ground, obj, des, true, false);
        }
    }
}
