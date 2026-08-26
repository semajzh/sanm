#include "method3010722.h"
#include "ground.h"
#include "item.h"
#include "buff/buff013.h"
#include "buff/buff3010722.h"
#include "log/logger.h"

Method3010722::Method3010722()
{
    type = 22;
    id = 3010722;
    luck = 45;
}

Method3010722::~Method3010722()
{

}

int Method3010722::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 4);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        if (item1->g[0]/10 == obj/10)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30107221(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
        else
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30107222(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
