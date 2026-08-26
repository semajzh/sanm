#include "buff1091222.h"
#include "ground.h"
#include "buff111.h"
#include "log/logger.h"

void Buff1091222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
        float j = 10 + ground->m_group[src/10].m_item[src%10].i[0] / 100;
        j0 += j;
        ground->m_group[src/10].m_item[src%10].j[0] += j;
    }
    if (count >= 2)
    {
        run(ground);
    }
}

void Buff1091222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[src/10].m_item[src%10].j[0] -= j0;
}

void Buff1091222::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        float j = 10 + ground->m_group[src/10].m_item[src%10].i[0] / 100;
        j0 += j;
        ground->m_group[src/10].m_item[src%10].j[0] += j;
    }
    if (count >= 2)
    {
        run(ground);
    }
}

void Buff1091222::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(src, des, id, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}
