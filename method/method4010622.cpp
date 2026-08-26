#include "method4010622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff102.h"
#include "buff/buff401061.h"
#include "log/logger.h"

Method4010622::Method4010622()
{
    type = 2222;
    id = 4010622;
    luck = 65;
}

Method4010622::~Method4010622()
{

}

int Method4010622::getLuck(Ground* ground, Item* item1)
{
    float point1 = 65 + item1->star;
    luck = point1 + (check401061(ground, item1->g[0]) ? 10 : 0);
    return luck;
}

int Method4010622::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 120, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    bool b401061 = check401061(ground, item1->g[0]);
    point1 = point1 * (b401061 ? (1 - 0.2) : 1);
    point2 = point2 * (b401061 ? (1 - 0.2) : 1);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0033);
    for (int obj : objs)
    {
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);

        if (ground->m_group[obj/10].m_item[obj%10].g[1] == 0)
        {
            Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
        }
    }

    if (b401061)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010612(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method4010622::check401061(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401061)
        {
            return true;
        }
    }
    return false;
}
