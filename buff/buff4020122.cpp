#include "buff4020122.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff40201221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float sx = Ground::getMaxi(ground, src);
    float i = (point1 + sx / 10);
    for (int j = 0; j < 4; ++j)
    {
        if (j == 2)
        {
            continue;
        }
        ix[j] = i;
        ground->m_group[des/10].m_item[des%10].i[j] += ix[j];
    }
}

void Buff40201221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    for (int j = 0; j < 4; ++j)
    {
        if (j == 2)
        {
            continue;
        }
        ground->m_group[des/10].m_item[des%10].i[j] -= ix[j];
    }
}

void Buff40201222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float point2 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
    for (int j = 0; j < 4; ++j)
    {
        if (j == 2)
        {
            continue;
        }
        ix[j] = Ground::addin(ground, des, j, -point2);
        ground->m_group[des/10].m_item[des%10].i[j] += ix[j];
        if (j == 0)
        {
            Buff020::check020(ground, src, des, true);
        }
        check4110121(ground);
    }
    Ground::exenter(ground, src, des, id);
}

void Buff40201222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    for (int j = 0; j < 4; ++j)
    {
        if (j == 2)
        {
            continue;
        }
        ground->m_group[des/10].m_item[des%10].i[j] -= ix[j];
    }
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff40201222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff40201222::check4110121(Ground* ground)
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

