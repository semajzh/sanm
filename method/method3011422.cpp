#include "method3011422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3011422.h"
#include "buff/buff011.h"
#include "log/logger.h"

Method3011422::Method3011422()
{
    type = 2222;
    id = 3011422;
    luck = 55;
}

Method3011422::~Method3011422()
{

}

int Method3011422::getLuck(Ground* , Item* item1)
{
    luck = 55 + item1->star;
    return luck;
}

int Method3011422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);
    float point = Ground::addbyix(ground, point1, item1->i[2]);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3011422(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);
    }

    return 1;
}
