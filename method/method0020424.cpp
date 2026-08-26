#include "method0020424.h"
#include "ground.h"
#include "item.h"
#include "buff/buff017.h"
#include "log/logger.h"

Method0020424::Method0020424()
{
    type = 2224;
    id = 20424;
    luck = 60;
}

Method0020424::~Method0020424()
{

}

int Method0020424::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 180, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 100, item1->g[0], id);
    bool b017 = false;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    if (objs.size() > 0)
    {
        int obj = objs.at(qrand() % objs.size());
        objs.removeOne(obj);
        b017 = check017(ground, obj);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
    }
    if (b017 && objs.size() > 0)
    {
        int obj = objs.at(qrand() % objs.size());
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2);
    }

    return 1;
}

bool Method0020424::check017(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 17)
        {
            return true;
        }
    }
    return false;
}
