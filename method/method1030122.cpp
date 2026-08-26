#include "method1030122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1030122.h"
#include "log/logger.h"

Method1030122::Method1030122()
{
    type = 2222;
    id = 1030122;
    luck = 100;
}

Method1030122::~Method1030122()
{

}

int Method1030122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1030122(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    float point1 = Ground::pointbystar(ground, 50, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    float point3 = Ground::pointbystar(ground, 20, item1->g[0], id);

    if (qrand() % 100 + 1 > 100 - point1 - item1->i[1]/36)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1030122(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    int size = check1030122(ground, item1->g[0]);
    QVector<int> objs = Ground::selectObjN(ground, obj, 0x0042, obj);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2 + point3 * size);
    }

    return 1;
}

int Method1030122::check1030122(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1030122)
        {
            QSharedPointer<Buff1030122> buff = qSharedPointerCast<Buff1030122>(pbuff);
            return buff->sizeoflayouts();
        }
    }
    return 0;
}
