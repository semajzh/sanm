#include "method0050322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff015.h"
#include "log/logger.h"

Method0050322::Method0050322()
{
    type = 2222;
    id = 50322;
    luck = 45;
}

Method0050322::~Method0050322()
{

}

int Method0050322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 150, item1->g[0], id);
    bool b015 = qrand() % 100 + 1 > 100 - 75;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        if (b015)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
