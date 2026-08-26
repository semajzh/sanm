#include "method0012422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0012422.h"
#include "log/logger.h"

Method0012422::Method0012422()
{
    type = 2222;
    id = 12422;
    luck = 60;
}

Method0012422::~Method0012422()
{

}

int Method0012422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float k12 = check003(ground, obj) ? 25 : 0;
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 0, k12);
    }

    int obj = item1->g[0];
    if (check003(ground, obj))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0012422(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return 1;
}

bool Method0012422::check003(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 3)
        {
            return true;
        }
    }
    return false;
}
