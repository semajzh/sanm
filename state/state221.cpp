#include "state221.h"
#include "ground.h"
#include "buff/buff.h"
#include <QString>
#include <QDebug>

State221::State221()
{

}

State221::~State221()
{

}

void State221::run(Ground* ground)
{
    speed(ground);
    buff5(ground);
    buff7(ground);
}

void State221::speed(Ground* ground)
{
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            ground->data[i*10+j].actrc = 0;
        }
    }

    int speed[6] = {0};
    for (int i = 0; i < 3; ++i)
    {
        speed[i] = ground->m_group[0].m_item[i].i[3];
    }
    for (int i = 0; i < 3; ++i)
    {
        speed[i+3] = ground->m_group[1].m_item[i].i[3];
    }
    QString str;
    for (int i = 0; i < 6; ++i)
    {
        bool f = true;
        for (int j = 0; j < str.length(); ++j)
        {
            if (speed[i] > speed[str.mid(j, 1).toInt()])
            {
                str.insert(j, QString::number(i));
                f = false;
                break;
            }
        }
        if (f)
        {
            str.append(QString::number(i));
        }
    }
    for (int i = 0; i < 6; ++i)
    {
        int n = str.mid(i, 1).toInt();
        ground->m_sort[i] = (n >= 3) ? (10+n-3) : (n);
    }
}

void State221::buff5(Ground* ground)
{
#if 0
    for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[5])
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
        Ground::checkbuff(ground, 5, current, [](Ground* ground, QSharedPointer<Buff> buff) {
            buff->run(ground);
        });
    }
#endif
}

void State221::buff7(Ground* ground)
{
#if 0
    for (QVector<QSharedPointer<Buff>>& buffs : ground->buff[7])
    {
        for (QSharedPointer<Buff> pbuff : buffs)
        {
            pbuff->enter(ground);
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
            buff->enter(ground);
        });
    }
#endif
}
