#include "method0013022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff002.h"
#include "log/logger.h"

Method0013022::Method0013022()
{
    type = 2222;
    id = 13022;
    luck = 55;
}

Method0013022::~Method0013022()
{

}

int Method0013022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 130, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actbr(ground, item1, &item2, id, point1);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
