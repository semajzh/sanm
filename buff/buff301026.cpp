#include "buff301026.h"
#include "ground.h"
#include "buff001.h"
#include "buff002.h"
#include "buff003.h"
#include "buff004.h"
#include "buff005.h"
#include "buff011.h"
#include "buff012.h"
#include "buff013.h"
#include "buff014.h"
#include "buff015.h"
#include "buff016.h"
#include "buff017.h"
#include "log/logger.h"

void Buff301026::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k2 = Ground::addkn(ground, des, 2, 6);
    ground->m_group[des/10].m_item[des%10].k[2] += k2;
}

void Buff301026::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[2] -= k2;
}

void Buff301026::run(Ground* ground)
{
    if (++count < 5)
    {
        return;
    }
    count = 0;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x22);
    for (int obj : objs)
    {
        randombuff(ground, des, obj);
    }
}

void Buff301026::randombuff(Ground* ground, int des, int obj)
{
    int bid = qrand() % 12;
    QSharedPointer<Buff> buff;
    switch (bid)
    {
    case 0:
        buff = QSharedPointer<Buff>(new Buff001(des, obj, 301026, 1));
        break;

    case 1:
        buff = QSharedPointer<Buff>(new Buff002(des, obj, 301026, 1));
        break;

    case 2:
        buff = QSharedPointer<Buff>(new Buff003(des, obj, 301026, 1));
        break;

    case 3:
        buff = QSharedPointer<Buff>(new Buff004(des, obj, 301026, 1));
        break;

    case 4:
        buff = QSharedPointer<Buff>(new Buff005(des, obj, 301026, 1));
        break;

    case 5:
        buff = QSharedPointer<Buff>(new Buff011(des, obj, 301026, 1));
        break;

    case 6:
        buff = QSharedPointer<Buff>(new Buff012(des, obj, 301026, 1));
        break;

    case 7:
        buff = QSharedPointer<Buff>(new Buff013(des, obj, 301026, 1));
        break;

    case 8:
        buff = QSharedPointer<Buff>(new Buff014(des, obj, 301026, 1));
        break;

    case 9:
        buff = QSharedPointer<Buff>(new Buff015(des, obj, 301026, 1));
        break;

    case 10:
        buff = QSharedPointer<Buff>(new Buff016(des, obj, 301026, 1));
        break;

    case 11:
        buff = QSharedPointer<Buff>(new Buff017(des, obj, 301026, 1));
        break;

    default:
        return;
    }

    Ground::addBuff(ground, ground->buff[1][obj], buff);
}
