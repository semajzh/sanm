#include "method1011422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff012.h"
#include "log/logger.h"

Method1011422::Method1011422()
{
    type = 2222;
    id = 1011422;
    luck = 60;
}

Method1011422::~Method1011422()
{

}

int Method1011422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 350, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        QVector<int> objs = Ground::selectObjN(ground, obj, 0xA010);
        float k12 = (check012(ground, item1->g[0]) || (objs.size() > 0 && objs.front() == obj)) ? 30 : 0;
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 0, k12);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method1011422::check012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 12)
        {
            return true;
        }
    }
    return false;
}
