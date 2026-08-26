#include "method0080222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0080222.h"
#include "log/logger.h"

Method0080222::Method0080222()
{
    type = 2222;
    id = 80222;
    luck = 100;
}

Method0080222::~Method0080222()
{

}

int Method0080222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 90, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 160, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0080222(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);
    if (!check80222(ground, item1->g[0]))
    {
        return 1;
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
    }

    return 1;
}

bool Method0080222::check80222(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 80222)
        {
            QSharedPointer<Buff0080222> buff = qSharedPointerCast<Buff0080222>(pbuff);
            return buff->run(ground, 4);
        }
    }
    return false;
}
