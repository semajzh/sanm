#include "method0020222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020222.h"
#include "buff/buff102.h"
#include "log/logger.h"
#include <QDebug>

Method0020222::Method0020222()
{
    type = 2222;
    id = 20222;
    luck = 75;
}

Method0020222::~Method0020222()
{

}

int Method0020222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3030);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0020222(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff102(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff2);
    }

    return 1;
}
