#include "method0110222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0110222.h"
#include "log/logger.h"

Method0110222::Method0110222()
{
    type = 2222;
    id = 110222;
    luck = 60;
}

Method0110222::~Method0110222()
{

}

int Method0110222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 160, item1->g[0], id);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0110222(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float point = point1 + (check020(ground, obj) ? 30 : 0);
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point);
    }

    return 1;
}

bool Method0110222::check020(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 20)
        {
            return true;
        }
    }
    return false;
}
