#include "method0017522.h"
#include "ground.h"
#include "item.h"
#include "buff/buff003.h"
#include "buff/buff0017522.h"
#include "log/logger.h"

Method0017522::Method0017522()
{
    type = 2222;
    id = 17522;
    luck = 50;
}

Method0017522::~Method0017522()
{

}

int Method0017522::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0241, item1->g[0]);
    for (int obj : objs)
    {
        bool b003 = check003(ground, obj);
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actbr(ground, item1, &item2, id, 276);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff003(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        if (b003)
        {
            QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff0017522(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff2);
        }
    }

    return 1;
}

bool Method0017522::check003(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 3)
        {
            return true;
        }
    }
    return false;
}
