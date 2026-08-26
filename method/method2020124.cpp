#include "method2020124.h"
#include "ground.h"
#include "item.h"
#include "buff/buff002.h"
#include "log/logger.h"

Method2020124::Method2020124()
{
    type = 2224;
    id = 2020124;
    luck = 70;
}

Method2020124::~Method2020124()
{

}

int Method2020124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 1;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(item1->g[0], obj, 2020124, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 80, item1->g[0], id);

    Item& item2 = ground->m_group[obj/10].m_item[obj%10];
    Ground::actbr(ground, item1, &item2, id, point1);
    if (qrand() % 100 + 1 > 100 - point2)
    {
        Ground::actbr(ground, item1, &item2, id, point1);
    }

    return 1;
}

