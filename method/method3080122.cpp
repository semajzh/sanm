#include "method3080122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3080122.h"
#include "log/logger.h"

Method3080122::Method3080122()
{
    type = 2222;
    id = 3080122;
    luck = 55;
}

Method3080122::~Method3080122()
{

}

int Method3080122::getLuck(Ground* , Item* item1)
{
    bool b308011 = (item1->strategys[0] == 308011 || item1->strategys[1] == 308011 || item1->strategys[2] == 308011);
    luck = 55 + (b308011 ? 10 : 0);
    return luck;
}

int Method3080122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        Ground::exremove(ground, obj, 2);
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3080122(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
