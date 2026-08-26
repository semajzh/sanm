#include "buff3011422.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff3011422::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float ix = ground->m_group[src/10].m_item[src%10].i[0] > ground->m_group[src/10].m_item[src%10].i[2] ? ground->m_group[src/10].m_item[src%10].i[0] : ground->m_group[src/10].m_item[src%10].i[2];
    i2 = Ground::addbyix(ground, point1, ix);
    if (ground->m_group[src/10].m_item[src%10].i[2] <= ground->m_group[des/10].m_item[des%10].i[2])
    {
        i2 *= 1.5;
    }
    i2 = Ground::addin(ground, des, 2, -i2);
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff3011422::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff3011422::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff3011422::check4110121(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 41101212)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}
