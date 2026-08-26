#include "buff2091121.h"
#include "ground.h"
#include "log/logger.h"

void Buff2091121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j7 = 25 + ground->m_group[src/10].m_item[src%10].i[0] / 20; //
    ground->m_group[des/10].m_item[des%10].j[7] += j7;
}

void Buff2091121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[7] -= j7;
}

bool Buff2091121::run(Ground* ground, int& obj, float& point)
{
    float jl = 30 + ground->m_group[src/10].m_item[src%10].i[0] / 20; //
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return false;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0221);
    if (objs.size() > 0)
    {
        obj = objs.front();
    }
    point *= 1.15;
    return true;
}
