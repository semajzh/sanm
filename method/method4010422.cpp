#include "method4010422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff101.h"
#include "buff/buff4010422.h"
#include "log/logger.h"

Method4010422::Method4010422()
{
    type = 2222;
    id = 4010422;
    luck = 60;
}

Method4010422::~Method4010422()
{

}

int Method4010422::getLuck(Ground* ground, Item* item)
{
    luck = checkzb(ground, item->g[0]) ? 999 : 60;
    return luck;
}

int Method4010422::run(Ground* ground, Item* item1)
{
    if (ZBMethod::run(ground, item1) == 2)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010422(item1->g[0], item1->g[0], id, 1));
        Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);
        return 2;
    }

    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 30, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 300, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        int ex = Ground::exsize(ground, obj);
        if (ex > 3)
        {
            ex = 3;
        }
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2 + point1 * ex);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40104221(item1->g[0], obj, id, 4));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}

bool Method4010422::checkzb(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 4010422)
        {
            return true;
        }
    }
    return false;
}

