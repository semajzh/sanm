#include "method0013924.h"
#include "ground.h"
#include "item.h"
#include "buff/buff016.h"
#include "log/logger.h"
#include <QDebug>

Method0013924::Method0013924()
{
    type = 2224;
    id = 13924;
    luck = 40;
}

Method0013924::~Method0013924()
{

}

int Method0013924::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 280, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        bool b016 = check016(ground, obj);
        float k12 = b016 ? 30 : 0;
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 0, k12);

        if (!b016 && qrand() % 100 + 1 > 100 - 65)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0013924::check016(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 16)
        {
            return true;
        }
    }
    return false;
}
