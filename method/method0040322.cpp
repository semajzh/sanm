#include "method0040322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0040322.h"
#include "buff/buff011.h"
#include "buff/buff012.h"
#include "buff/buff013.h"
#include "buff/buff014.h"
#include "buff/buff015.h"
#include "buff/buff016.h"
#include "buff/buff017.h"
#include "log/logger.h"


Method0040322::Method0040322()
{
    type = 2222;
    id = 40322;
    luck = 45;
}

Method0040322::~Method0040322()
{

}

int Method0040322::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 45;
    return luck;
}

int Method0040322::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0040322(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 260, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 80, item1->g[0], id);
    bool b = (qrand() % 100 + 1 > 100 - point2);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (b)
        {
            switch (qrand() % 7 + 1)
            {
            case 1: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 2: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 3: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 4: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff014(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 5: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 6: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            case 7: {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 2));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            } break;
            default:
                break;
            }
        }
    }

    return 1;
}

bool Method0040322::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 40322)
        {
            return true;
        }
    }
    return false;
}
