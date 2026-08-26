#include "method0012322.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "log/logger.h"
#include <QDebug>

Method0012322::Method0012322()
{
    type = 2222;
    id = 12322;
    luck = 45;
}

Method0012322::~Method0012322()
{

}

int Method0012322::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 80, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actml(ground, item1, &item2, id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    for (int n = 0; n < 3; ++n)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
        if (objs.size() <= 0)
        {
            continue;
        }
        int obj = objs.front();
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float k12 = check003(ground, obj) ? 30 : 0;
        Ground::actml(ground, item1, &item2, id, point1, k12);
    }

    return 1;
}

bool Method0012322::check003(Ground* ground, int obj)
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
