#include "method4091424.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4091424.h"
#include "log/logger.h"


Method4091424::Method4091424()
{
    type = 2224;
    id = 4091424;
    luck = 60;
}

Method4091424::~Method4091424()
{

}

int Method4091424::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float data = 16.0f + item1->i[1] / 20;
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40914242(item1->g[0], obj, id, 2, data*1000));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff40914241(item1->g[0], item1->g[0], id, 2, data*1000));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff1);

        data = 120 + ((item1->i[3] > item2.i[3]) ? (item1->i[3] - item2.i[3])/10 : 0);
        float k12 = (item2.g[4] == 1) ? 10 : 0;
        Ground::actbr(ground, item1, &item2, id, data, false, true, k12);
        Ground::actml(ground, item1, &item2, id, data, k12);
    }

    return 1;
}

