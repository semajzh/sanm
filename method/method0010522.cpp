#include "method0010522.h"
#include "ground.h"
#include "item.h"
#include "buff/buff012.h"
#include "log/logger.h"
#include <QDebug>

Method0010522::Method0010522()
{
    type = 2222;
    id = 10522;
    luck = 45;
}

Method0010522::~Method0010522()
{

}

int Method0010522::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    bool b012 = (qrand() % 100 + 1 > 100 - 50);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actml(ground, item1, &item2, id, point1);
        if (b012)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
