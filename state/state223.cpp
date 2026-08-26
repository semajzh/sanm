#include "state223.h"
#include "ground.h"
#include "buff/buff.h"
#include "log/logger.h"
#include <QSharedPointer>

State223::State223()
{

}

State223::~State223()
{

}

void State223::run(Ground* ground)
{
    Logger::H().print223(ground);
    buff4(ground);
    buff6(ground);
    buff7(ground);
    buff8(ground);
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->data[g*10+i].h0[ground->m_round] = ground->m_group[g].m_item[i].h[0];
        }
    }
}

void State223::buff4(Ground* ground)
{
#if 0
    for (int j = 0; j < 6; ++j)
    {
        int current = ground->m_sort[j];
        int g = current / 10;
        int i = current % 10;
        Item& item1 = ground->m_group[g].m_item[i];
        if (item1.h[0] <= 0)
        {
            continue;
        }
        for (QSharedPointer<Buff> buff : ground->buff[4][current])
        {
            buff->run(ground);
        }
    }
#else
    for (int current : ground->m_sort)
    {
        if (ground->m_group[current/10].m_item[current%10].h[0] <= 0)
        {
            continue;
        }
        Ground::checkbuff(ground, 4, current, [](Ground* ground, QSharedPointer<Buff> buff) {
            buff->run(ground);
        });
    }
#endif
}

void State223::buff6(Ground* ground)
{
    for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[6])
    {
        for (int k = buffs.size() - 1; k >= 0; --k)
        {
            QSharedPointer<BuffC> buff = qSharedPointerCast<BuffC>(buffs.at(k));
            if (--(buff->m_round) == 0)
            {
                buff->exit(ground);
                buffs.remove(k);
            }
        }
    }
}

void State223::buff7(Ground* ground)
{
#if 1
    for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[7])
    {
        for (QSharedPointer<Buff> pbuff : buffs)
        {
            pbuff->run(ground);
        }
    }
#else
    for (int current : ground->m_sort)
    {
        if (ground->m_group[current/10].m_item[current%10].h[0] <= 0)
        {
            continue;
        }
        Ground::checkbuff(ground, 7, current, [](Ground* ground, QSharedPointer<Buff> buff) {
            buff->run(ground);
        });
    }
#endif
}

void State223::buff8(Ground* ground)
{
    for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[8])
    {
        for (int k = buffs.size() - 1; k >= 0; --k)
        {
            QSharedPointer<BuffC> buff = qSharedPointerCast<BuffC>(buffs.at(k));
            if (--(buff->m_round) == 0)
            {
                buff->exit(ground);
                buffs.remove(k);
            }
        }
    }
}

