#include "method0080121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0080121.h"
#include "log/logger.h"

Method0080121::Method0080121()
{
    type = 21;
    id = 80121;
}

Method0080121::~Method0080121()
{

}

int Method0080121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    // 221:act
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00801211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[5][obj], buff);
    }
    // 223:hlo
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00801212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[4][obj], buff);
    }

    return 1;
}
