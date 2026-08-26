#include "buff2020222.h"
#include "ground.h"
#include "log/logger.h"

void Buff2020222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
}

void Buff2020222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff2020222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    Ground::exupdate(ground, src, des, id);
}

void Buff2020222::run(Ground* ground, int obj)
{
    if (count-- < 1)
    {
        return;
    }

    float point1 = Ground::pointbystar(ground, 80, src, method);
    float point2 = Ground::pointbystar(ground, 120, src, method);
    Item& item1 = ground->m_group[src/10].m_item[src%10];
    Ground::hloi(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point1, item1.i[1]);
    Ground::actml(ground, &item1, &ground->m_group[des/10].m_item[des%10], method, point2);
}
