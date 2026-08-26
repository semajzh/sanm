#include "method0013624.h"
#include "ground.h"
#include "item.h"
#include "buff/buff102.h"
#include "buff/buff0013624.h"
#include "log/logger.h"

Method0013624::Method0013624()
{
    type = 2224;
    id = 13624;
    luck = 70;
}

Method0013624::~Method0013624()
{

}

int Method0013624::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    int obj = ground->target2223;
    if (obj >= 0 && ground->m_group[obj/10].m_item[obj%10].h[0] > 0)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    if (item1->g[1] == 1 && qrand() % 100 + 1 > 100 - 75)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0013624(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

