#include "method2091222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2091222.h"
#include "log/logger.h"

Method2091222::Method2091222()
{
    type = 22;
    id = 2091222;
    luck = 75;
}

Method2091222::~Method2091222()
{

}

int Method2091222::getLuck(Ground* ground, Item* item1)
{
    int count = check20912222(ground, item1->g[0]);
    luck = 75 - count * 5;
    return luck;
}

int Method2091222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2091222(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        int point = Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 160);
        if (point / J02_FLAG_1 > 0)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 100, true, -999);
        }
    }

    QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff20912222(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff1);

    return 1;
}

int Method2091222::check20912222(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 20912222)
        {
            QSharedPointer<Buff20912222> buff = qSharedPointerCast<Buff20912222>(pbuff);
            return buff->run(ground, 3);
        }
    }
    return 0;
}
