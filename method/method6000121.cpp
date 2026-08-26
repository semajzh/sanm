#include "method6000121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff6000121.h"
#include "log/logger.h"

Method6000121::Method6000121()
{
    type = 21;
    id = 6000121;
}

Method6000121::~Method6000121()
{

}

int Method6000121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff6000121(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
