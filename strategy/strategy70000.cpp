#include "strategy70000.h"
#include "ground.h"
#include "item.h"
#include "buff/buff70000.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy70000A::Strategy70000A()
{
    id = 70000;
}

Strategy70000A::~Strategy70000A()
{

}

bool Strategy70000A::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff70000A(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
        Logger::H().printbuff(ground, item1, &ground->m_group[obj/10].m_item[obj%10], buff.data());
    }

    return true;
}

Strategy70000B::Strategy70000B()
{
    id = -70000;
}

Strategy70000B::~Strategy70000B()
{

}

bool Strategy70000B::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x5010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff70000B(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
        Logger::H().printbuff(ground, item1, &ground->m_group[obj/10].m_item[obj%10], buff.data());
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff70000C(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
        Logger::H().printbuff(ground, item1, &ground->m_group[obj/10].m_item[obj%10], buff.data());
    }

    return true;
}
