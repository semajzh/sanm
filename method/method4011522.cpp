#include "method4011522.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4011522.h"
#include "buff/buff012.h"
#include "log/logger.h"

Method4011522::Method4011522()
{
    type = 2222;
    id = 4011522;
    luck = 100;
}

Method4011522::~Method4011522()
{

}

int Method4011522::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);

    int obj = item1->g[0];
    if (item1->star > 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4011522(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        Ground::run2223(ground, item1->g[0], obj, true, true);
    }

    return 1;
}

