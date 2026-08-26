#include "method4011324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff104.h"
#include "log/logger.h"


Method4011324::Method4011324()
{
    type = 2224;
    id = 4011324;
    luck = 55;
}

Method4011324::~Method4011324()
{

}

int Method4011324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 280, item1->g[0], id);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff104(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0xA040);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}

