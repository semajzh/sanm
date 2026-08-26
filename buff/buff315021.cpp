#include "buff315021.h"
#include "ground.h"
#include "log/logger.h"

void Buff315021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        i[n] += ground->m_group[des/10].m_item[des%10].i[n] * 0.06f;
        ground->m_group[des/10].m_item[des%10].i[n] += i[n];
    }
}

void Buff315021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        ground->m_group[des/10].m_item[des%10].i[n] -= i[n];
    }
}

void Buff315021::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x0013);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 75);
    }
}
