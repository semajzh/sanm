#include "method0014024.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014024.h"
#include "log/logger.h"
#include <QDebug>

Method0014024::Method0014024()
{
    type = 2224;
    id = 14024;
    luck = 40;
}

Method0014024::~Method0014024()
{

}

int Method0014024::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014024(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actbr(ground, item1, &item2, id, point1 + item1->i[3]/4);
    }

    return 1;
}

