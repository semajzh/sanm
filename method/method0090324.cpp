#include "method0090324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff011.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "buff/buff014.h"
#include "buff/buff015.h"
#include "buff/buff016.h"
#include "buff/buff017.h"
#include "log/logger.h"

Method0090324::Method0090324()
{
    type = 2224;
    id = 90324;
    luck = 50;
}

Method0090324::~Method0090324()
{

}

int Method0090324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 110, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 60, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (qrand() % 100 + 1 > 100 - point2)
        {
            addbuff(ground, item1->g[0], obj);
        }
    }

    return 1;
}

void Method0090324::addbuff(Ground* ground, int obj1, int obj2)
{
    int ex[] = {11, 12, 13, 14, 15, 16, 17}; //7
    int size = sizeof(ex) / sizeof(int);
    int e = ex[qrand() % size];
    int r = 1;
    switch (e)
    {
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
