#include "method1040121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1040121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1040121::Method1040121()
{
    type = 21;
    id = 1040121;
}

Method1040121::~Method1040121()
{

}

int Method1040121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        if (item2.g[4] == 2 || item2.g[4] == 3)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff1040121>(new Buff1040121(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[2][obj], buff);
        }
    }

    return 1;
}
