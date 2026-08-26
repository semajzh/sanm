#include "method4011422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4011422.h"
#include "buff/buff005.h"
#include "buff/buff012.h"
#include "log/logger.h"

Method4011422::Method4011422()
{
    type = 2222;
    id = 4011422;
    luck = 65;
}

Method4011422::~Method4011422()
{

}

int Method4011422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);

    bool b401141 = check401141(ground, item1->g[0]);
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4011422(item1->g[0], obj, id, 2, b401141 ? 8 : 0));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff005(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method4011422::check401141(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401141)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}
