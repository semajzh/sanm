#include "buff105011.h"
#include "buff011.h"
#include "buff012.h"
#include "buff013.h"
#include "buff014.h"
#include "buff015.h"
#include "buff016.h"
#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

void Buff105011::run(Ground* ground)
{
    if (++count % 9 != 0)
    {
        return;
    }

    float jl = Ground::addbyix(ground, 50, ground->m_group[des/10].m_item[des%10].i[1]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x0043, des);
    for (int obj : objs)
    {
        addbuff(ground, des, obj, checkbuff(ground, obj));
    }
}

int Buff105011::checkbuff(Ground* ground, int obj)
{
    int ex[] = {11, 12, 13, 14, 15, 16, 17};
    QVector<int> exv;
    for (int e : ex)
    {
        if (!ground->exceptions[obj].contains(e))
        {
            exv.push_back(e);
        }
    }
    return (exv.size() > 0) ? exv[qrand() % exv.size()] : ex[qrand() % 7];
}

void Buff105011::addbuff(Ground* ground, int obj1, int obj2, int e)
{
    switch (e)
    {
    case 11: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 12: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 13: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 14: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 15: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 16: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 17: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(obj1, obj2, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    default:
        break;
    }
}
