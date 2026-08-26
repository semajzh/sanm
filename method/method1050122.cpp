#include "method1050122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "buff/buff002.h"
#include "buff/buff003.h"
#include "buff/buff004.h"
#include "buff/buff005.h"
#include "buff/buff011.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "buff/buff014.h"
#include "buff/buff015.h"
#include "buff/buff016.h"
#include "buff/buff017.h"
#include "log/logger.h"

Method1050122::Method1050122()
{
    type = 2222;
    id = 1050122;
    luck = 60;
}

Method1050122::~Method1050122()
{

}

int Method1050122::getLuck(Ground* ground, Item* item1)
{
    luck = Ground::pointbystar(ground, 60, item1->g[0], id);
    return luck;
}

int Method1050122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        addbuff(ground, item1->g[0], obj);
    }

    return 1;
}

void Method1050122::addbuff(Ground* ground, int obj1, int obj2)
{
    float f105011 = check105011(ground, obj1) ? 1.3 : 1;
    int ex0[] = {1, 2, 3, 4, 5};
    int ex1[] = {11, 12, 13, 14, 15, 16, 17};
    int size0 = sizeof(ex0) / sizeof(int);
    int size1 = sizeof(ex1) / sizeof(int);
    int base = size0 * 10 + size1 * 10 * f105011; //60+70/91
    int q = qrand() % base;;
    int e = (q < size0 * 10) ? ex0[q % size0] : ex1[q % size1];
    int r = 2;
    switch (e)
    {
    case 1: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 2: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 3: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff003(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 4: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 5: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff005(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 11: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 12: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 13: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 14: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 15: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 16: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    case 17: {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(obj1, obj2, id, r));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    } break;

    default:
        break;
    }
}

bool Method1050122::check105011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 105011)
        {
            return true;
        }
    }
    return false;
}
