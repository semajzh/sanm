#include "buff0014621.h"
#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

void Buff00146211::run(Ground* ground)
{
    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff00146212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 110, src, method);
    QVector<int> objs = selectObj015(ground);
    for (int obj : objs)
    {
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

QVector<int> Buff00146212::selectObj015(Ground* ground)
{
    QVector<int> objs;
    int g = 1 - des / 10;
    for (int obj = g*10; obj < g*10+3; ++obj)
    {
        for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
        {
            if (pbuff->id == 15)
            {
                objs.append(obj);
                break;
            }
        }
    }
    return objs;
}
