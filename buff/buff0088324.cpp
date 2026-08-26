#include "buff0088324.h"
#include "buff111.h"
#include "buff102.h"
#include "ground.h"
#include "log/logger.h"

void Buff0088324::enter(Ground* ground)
{
    addlayout(ground);
}

void Buff0088324::exit(Ground* ground)
{
    for (int i = 1; i <= 8; ++i)
    {
        if (layouts[i] == 1)
        {
            dellayout(ground, i);
        }
    }
}

void Buff0088324::update(Ground* ground, QSharedPointer<Buff> )
{
    addlayout(ground);
}

int Buff0088324::sizeoflayouts()
{
    int num = 0;
    for (int l : layouts)
    {
        num += l;
    }
    return num;
}

int Buff0088324::add(int l)
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

void Buff0088324::addlayout(Ground* ground)
{
    layouts[1] = check111(ground) ? 1 : 0;
    int size = sizeoflayouts();
    if (size >= 8)
    {
        return;
    }

    int r = qrand() % (8 - size) + 1;
    r = add(r);
    Logger::H().printcustom(ground, 88324, des, r);
    switch (r)
    {
    case 1: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(des, des, 88324, 8 - ground->m_round));
        Ground::addBuff(ground, ground->buff[1][des], buff);
    } break;

    case 2: {
        ground->m_group[des/10].m_item[des%10].j[0] += 20;
        ground->m_group[des/10].m_item[des%10].j[2] += 20;
    } break;

    case 3: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00883242(des, des, 88324));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    } break;

    case 4:
        ground->m_group[des/10].m_item[des%10].k[5] += 20;
        break;

    case 5:
        ground->m_group[des/10].m_item[des%10].j[6] += 10;
        break;

    case 6: {
        ground->m_group[des/10].m_item[des%10].i[0] += 30;
        ground->m_group[des/10].m_item[des%10].i[1] += 30;
    } break;

    case 7:{
        ground->m_group[des/10].m_item[des%10].j[1] += 20;
        ground->m_group[des/10].m_item[des%10].j[3] += 20;
    } break;

    case 8:
        ground->m_group[des/10].m_item[des%10].j[7] += 40;
        break;
    }
}

void Buff0088324::dellayout(Ground* ground, int r)
{
    switch (r)
    {
    case 1:
        break;

    case 2: {
        ground->m_group[des/10].m_item[des%10].j[0] -= 20;
        ground->m_group[des/10].m_item[des%10].j[2] -= 20;
    } break;

    case 3:
        break;

    case 4:
        ground->m_group[des/10].m_item[des%10].k[5] -= 20;
        break;

    case 5:
        ground->m_group[des/10].m_item[des%10].j[6] -= 10;
        break;

    case 6: {
        ground->m_group[des/10].m_item[des%10].i[0] -= 30;
        ground->m_group[des/10].m_item[des%10].i[1] -= 30;
    } break;

    case 7:{
        ground->m_group[des/10].m_item[des%10].j[1] -= 20;
        ground->m_group[des/10].m_item[des%10].j[3] -= 20;
    } break;

    case 8:
        ground->m_group[des/10].m_item[des%10].j[7] -= 40;
        break;
    }
    layouts[r] = 0;
}

bool Buff0088324::check111(Ground* ground)
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

bool Buff00883242::run(Ground* ground, int& obj)
{
    bool b017 = check017(ground);
    QVector<int> objs;
    for (int g = 0; g <= 1; ++g)
    {
        if (!b017 && g != obj / 10)
        {
            continue;
        }
        for (int i = 0; i < 3; ++i)
        {
            if (ground->m_group[g].m_item[i].h[0] <= 0)
            {
                continue;
            }
            if (ground->m_group[g].m_item[i].g[1] == 1)
            {
                objs.append(g*10+i);
            }
        }
    }

    if (objs.size() == 0)
    {
        return false;
    }

    int r = qrand() % objs.size();
    obj = objs.at(r);

    return true;
}

bool Buff00883242::check017(Ground* ground)
{
    bool ret = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][des])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 17)
        {
            ret = true;
        }
    }
    return ret;
}
