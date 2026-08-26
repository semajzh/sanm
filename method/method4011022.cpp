#include "method4011022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff005.h"
#include "buff/buff003.h"
#include "log/logger.h"

Method4011022::Method4011022()
{
    type = 2222;
    id = 4011022;
    luck = 60;
}

Method4011022::~Method4011022()
{

}

int Method4011022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 280, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        float k12 = check005(ground, obj) ? 35 : 0;
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, k12);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff005(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff003(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);
    }

    return 1;
}

bool Method4011022::check005(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 5)
        {
            return true;
        }
    }
    return false;
}
