#include "method0010924.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0010924.h"
#include "log/logger.h"
#include <QDebug>

Method0010924::Method0010924()
{
    type = 2224;
    id = 10924;
    luck = 40;
}

Method0010924::~Method0010924()
{

}

int Method0010924::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 400, item1->g[0], id);
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0010924(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
    int obj = ground->target2223;
    if (obj != -1 && ground->m_group[obj/10].m_item[obj%10].h[0] > 0)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1 - (ground->m_round - 1) * 25);
    }

    return 1;
}

