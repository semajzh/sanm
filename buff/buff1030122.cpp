#include "buff1030122.h"
#include "buff111.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff1030122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    addlayout(ground);
}

void Buff1030122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);

    for (int i = 1; i <= 8; ++i)
    {
        if (layouts[i] == 1)
        {
            dellayout(ground, i);
        }
    }
}

void Buff1030122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);

    addlayout(ground);
}

int Buff1030122::sizeoflayouts()
{
    int num = 0;
    for (int l : layouts)
    {
        num += l;
    }
    return num;
}

void Buff1030122::addlayout(Ground* ground)
{
    layouts[1] = check111(ground) ? 1 : 0;
    layouts[2] = check102(ground) ? 1 : 0;
    int size = sizeoflayouts();
    if (size >= 8)
    {
        return;
    }

    int r = qrand() % (8 - size) + 1;
    r = add(r);
    switch (r)
    {
    case 1: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(des, des, 1030122, 8 - ground->m_round));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    } break;

    case 2: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(des, des, 1030122, 1));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    } break;

    case 3:
        k2 = Ground::addkn(ground, des, 2, 8);
        ground->m_group[des/10].m_item[des%10].k[2] += k2;
        break;

    case 4:
        ground->m_group[des/10].m_item[des%10].j[2] += 15;
        break;

    case 5:
        ground->m_group[des/10].m_item[des%10].j[12] += 10;
        break;

    case 6:
        Ground::addi2(ground, des, 20);
        break;

    case 7:
        ground->m_group[des/10].m_item[des%10].i[1] += 20;
        break;

    case 8:
        ground->m_group[des/10].m_item[des%10].j[14] += 20;
        break;
    }

    check103011(ground);
}

void Buff1030122::dellayout(Ground* ground, int r)
{
    switch (r)
    {
    case 1:
        break;

    case 2:
        break;

    case 3:
        ground->m_group[des/10].m_item[des%10].k[2] -= k2;
        break;

    case 4:
        ground->m_group[des/10].m_item[des%10].j[2] -= 15;
        break;

    case 5:
        ground->m_group[des/10].m_item[des%10].j[12] -= 10;
        break;

    case 6:
        Ground::addi2(ground, des, -20);
        break;

    case 7:
        ground->m_group[des/10].m_item[des%10].i[1] -= 20;
        break;

    case 8:
        ground->m_group[des/10].m_item[des%10].j[14] -= 20;
        break;
    }
    layouts[r] = 0;
}

bool Buff1030122::check111(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][des])
    {
        if (pbuff->id == 111)
        {
            return true;
        }
    }
    return false;
}

bool Buff1030122::check102(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 102)
        {
            return true;
        }
    }
    return false;
}

int Buff1030122::add(int l)
{
    for (int i = 1; i <= 8; ++i)
    {
        if (layouts[i] == 0 && --l == 0)
        {
            layouts[i] = 1;
            return i;
        }
    }
    return 0;
}

bool Buff1030122::check103011(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 103011)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}
