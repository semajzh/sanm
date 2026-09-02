#include "method0017722.h"
#include "ground.h"
#include "item.h"
#include "buff/buff004.h"
#include "log/logger.h"

Method0017722::Method0017722()
{
    type = 2222;
    id = 17722;
    luck = 60;
}

Method0017722::~Method0017722()
{

}

int Method0017722::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        bool b004 = check004(ground, obj);
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actml(ground, item1, &item2, id, 115);

        if (b004)
        {
            Ground::actml(ground, item1, &item2, id, 69);
        }
        else
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0017722::check004(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 4)
        {
            return true;
        }
    }
    return false;
}
