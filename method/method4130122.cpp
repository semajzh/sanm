#include "method4130122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4130122.h"
#include "buff/buff413011.h"
#include "log/logger.h"

Method4130122::Method4130122()
{
    type = 22;
    id = 4130122;
    luck = 65;
}

Method4130122::~Method4130122()
{

}

int Method4130122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 150, item1->g[0], id);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4130122(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
        if (check413011(ground, item1->g[0], obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4130122(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[3][obj], buff);
        }
        Ground::actbr(ground, item1, &item2, id, point1);
        if (check4130122(ground, obj))
        {
            float f = item1->i[0] + (float)(item2.h[3]-item2.h[0])/item2.h[3]*100;
            float point = 0.0016f * f * f + 0.1424 * f + 279.42f;
            if (point > 1000)
            {
                point = 1000;
            }
            Ground::acttb(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 0, point);
        }
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41301222(item1->g[0], item1->g[0], id, 1));
    Ground::addBuff(ground, ground->buff[6][item1->g[0]], buff);

    return 1;
}

QVector<int> Method4130122::selectObj(Ground* ground, int obj)
{
    int min1 = 999, min2 = 999, obj1 = -1, obj2 = -1;
    QVector<int> objs = Ground::selectObjN(ground, obj, 0x0046, obj);
    for (int obj : objs)
    {
        float i2 = ground->m_group[obj/10].m_item[obj%10].i[2];
        if (min1 > min2)
        {
            if (min1 > i2)
            {
                min1 = i2;
                obj1 = obj;
                continue;
            }
        }
        else
        {
            if (min2 > i2)
            {
                min2 = i2;
                obj2 = obj;
            }
        }
    }
    QVector<int>().swap(objs);
    if (obj1 >= 0)
    {
        objs.append(obj1);
    }
    if (obj2 >= 0)
    {
        objs.append(obj2);
    }
    return objs;
}

bool Method4130122::check4130122(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4130122)
        {
            QSharedPointer<Buff4130122> buff = qSharedPointerCast<Buff4130122>(pbuff);
            return buff->run(ground, 5);
        }
    }
    return false;
}


bool Method4130122::check413011(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 413011)
        {
            QSharedPointer<Buff413011> buff = qSharedPointerCast<Buff413011>(pbuff);
            return buff->run(ground, obj2);
        }
    }
    return false;
}
