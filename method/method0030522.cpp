#include "method0030522.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "log/logger.h"
#include <QDebug>

Method0030522::Method0030522()
{
    type = 2222;
    id = 30522;
    luck = 50;
}

Method0030522::~Method0030522()
{

}

int Method0030522::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 90, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }

    return 1;
}
