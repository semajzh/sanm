#include "method3011322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3011322.h"
#include "buff/buff001.h"
#include "log/logger.h"

Method3011322::Method3011322()
{
    type = 2222;
    id = 3011322;
    luck = 50;
}

Method3011322::~Method3011322()
{

}

int Method3011322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3011322(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs1 = Ground::selectObjN(ground, item1->g[0], 0x3030);
    if (objs1.size() <= 0)
    {
        return 1;
    }
    int obj1 = objs1.front();

    float point1 = Ground::pointbystar(ground, 60, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 220, item1->g[0], id);

    Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], item1, id, point1);
    QVector<int> objs2 = Ground::selectObjN(ground, obj, 0x0042, obj);
    for (int obj2 : objs2)
    {
        Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], id, point2);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(obj1, obj2, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj2], buff);
    }

    return 1;
}
