#include "buff302012.h"
#include "ground.h"
#include "buff001.h"
#include "log/logger.h"

void Buff302012::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    j12 = 5;
    ground->m_group[des/10].m_item[des%10].j[12] += j12;
}

void Buff302012::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[12] -= j12;
}

void Buff302012::run(Ground* ground, int obj)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3020122(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}

void Buff3020122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float max = 0;
    for (int i = 0; i < 4; ++i)
    {
        if (max < ground->m_group[des/10].m_item[des%10].i[i])
        {
            max = ground->m_group[des/10].m_item[des%10].i[i];
            index = i;
        }
    }
    maxi = max * Ground::addbyix(ground, 5, ground->m_group[src/10].m_item[src%10].i[1]) / 100;
    ground->m_group[des/10].m_item[des%10].i[index] -= maxi;
    Ground::exenter(ground, src, des, id);
}

void Buff3020122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[index] += maxi;
    Ground::exexit(ground, src, des, id);
}

void Buff3020122::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
