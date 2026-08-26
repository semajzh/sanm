#include "method0130222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0130222.h"
#include "buff/buff102.h"
#include "log/logger.h"

Method0130222::Method0130222()
{
    type = 2222;
    id = 130222;
    luck = 60;
}

Method0130222::~Method0130222()
{

}

int Method0130222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(item1->g[0], item1->g[0], id, 1));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff0130222(item1->g[0], item1->g[0], id, 2));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff2);

    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
