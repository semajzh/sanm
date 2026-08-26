#include "method2010924.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010924.h"
#include "log/logger.h"

Method2010924::Method2010924()
{
    type = 2224;
    id = 2010924;
    luck = 55;
}

Method2010924::~Method2010924()
{

}

int Method2010924::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 1;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010924(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0046, item1->g[0]);
    for (int obj : objs)
    {
        if (Ground::exsize(ground, obj) > 0)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        }
    }

    return 1;
}

