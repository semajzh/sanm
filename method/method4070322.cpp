#include "method4070322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4070322.h"
#include "log/logger.h"

Method4070322::Method4070322()
{
    type = 2222;
    id = 4070322;
    luck = 70;
}

Method4070322::~Method4070322()
{

}

int Method4070322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point2 = Ground::pointbystar(ground, 180, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40703222(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    QVector<int> objs2 = Ground::selectObjN(ground, item1->g[0], 0x5030);
    objs2.insert(0, item1->g[0]);
    for (int obj : objs2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40703221(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float i2 = (item1->i[2] > item2.i[2]) ? (item1->i[2] - item2.i[2]) : 0;
        Ground::actml(ground, item1, &item2, id, point2 +  i2);
    }

    return 1;
}
