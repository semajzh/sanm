#include "method1011222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010121.h"
#include "log/logger.h"

Method1011222::Method1011222()
{
    type = 2222;
    id = 1011222;
    luck = 60;
}

Method1011222::~Method1011222()
{

}

int Method1011222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 360, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        float point = (check101121(ground, item1->g[0]) ? 30 : 0);
        Ground::acttb(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, item1->i[1], point);

        point = point1 + (ground->m_group[obj/10].m_item[obj%10].g[1] == 0 ? 80 : 0);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);
    }

    return 1;
}

bool Method1011222::check101121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[0][obj])
    {
        if (pbuff->id == 101121)
        {
            return true;
        }
    }
    return false;
}
