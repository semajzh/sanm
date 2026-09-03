#include "method2010222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010222.h"
#include "buff/buff201023.h"
#include "log/logger.h"

Method2010222::Method2010222()
{
    type = 22;
    id = 2010222;
    luck = 45;
}

Method2010222::~Method2010222()
{

}

int Method2010222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 8, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 3, item1->g[0], id);
    float point3 = Ground::pointbystar(ground, 180, item1->g[0], id);

    float j4 = point1;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        j4 += point2 * check02(ground, obj);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010222(item1->g[0], obj, id, 2, j4));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point3);
        if (Ground::exsize(ground, obj, 2) > 0)
        {
            Ground::acttb(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, item1->i[0], check201023(ground, item1->g[0], obj));
        }
    }

    return 1;
}

int Method2010222::check02(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 2)
        {
            return 1;
        }
    }
    return 0;
}

float Method2010222::check201023(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 201023)
        {
            float point = 0.0f;
            QSharedPointer<Buff201023> buff = qSharedPointerCast<Buff201023>(pbuff);
            buff->run(ground, obj2, point);
            return point;
        }
    }
    return 0.0f;
}
