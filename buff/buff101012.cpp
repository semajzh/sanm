#include "buff101012.h"
#include "ground.h"
#include "log/logger.h"

void Buff101012::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    if (++count > 3)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010122(src, des, id, 1));
    Ground::addBuff(ground, ground->buff[6][des], buff);
}

void Buff1010122::enter(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    float point = Ground::addbyix(ground, 8, ground->m_group[src/10].m_item[src%10].i[1]);
    int index = getMaxiIndex(ground, des);
    if (index >= 0)
    {
        i[index] += point;
        Ground::addin(ground, des, index, point);
    }
}

void Buff1010122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int n = 0; n < 4; ++n)
    {
        Ground::addin(ground, des, n, -i[n], true);
    }
}

void Buff1010122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point = Ground::addbyix(ground, 8, ground->m_group[src/10].m_item[src%10].i[1]);
    int index = getMaxiIndex(ground, des);
    if (index >= 0)
    {
        i[index] += point;
        Ground::addin(ground, des, index, point);
    }
}

int Buff1010122::getMaxiIndex(Ground* ground, int obj)
{
    int index = -1;
    float max = 0;
    int g = obj/10;
    int i = obj%10;
    for (int j = 0; j < 4; ++j)
    {
        if (ground->m_group[g].m_item[i].i[j] > max)
        {
            max = ground->m_group[g].m_item[i].i[j];
            index = j;
        }
    }
    return index;
}
