#include "method0030422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0030422.h"
#include "log/logger.h"
#include <QDebug>

Method0030422::Method0030422()
{
    type = 2222;
    id = 30422;
    luck = 45;
}

Method0030422::~Method0030422()
{

}

int Method0030422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 20, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 140, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float data = point1 + item1->i[1] / 30;
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00304222(item1->g[0], obj, id, 2, data*1000));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff00304221(item1->g[0], item1->g[0], id, 2, data*1000));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff1);

        Ground::actml(ground, item1, &item2, id, point2);
    }

    return 1;
}
