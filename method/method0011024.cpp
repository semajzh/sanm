#include "method0011024.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0011024.h"
#include "log/logger.h"

Method0011024::Method0011024()
{
    type = 2224;
    id = 11024;
    luck = 45;
}

Method0011024::~Method0011024()
{

}

int Method0011024::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 120, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0011024(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    return 1;
}
