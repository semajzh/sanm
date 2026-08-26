#include "method1011122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1011122.h"
#include "buff/buff013.h"
#include "log/logger.h"

Method1011122::Method1011122()
{
    type = 2222;
    id = 1011122;
    luck = 60;
}

Method1011122::~Method1011122()
{

}

int Method1011122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1011122(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    bool b013 = (qrand() % 100 + 1 > 100 - 65);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float k12 = check013(ground, obj) ? 30 : 0;
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 0, k12);

        if (b013)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method1011122::check013(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 13)
        {
            return true;
        }
    }
    return false;
}
