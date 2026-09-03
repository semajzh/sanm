#include "method4010722.h"
#include "ground.h"
#include "item.h"
#include "buff/buff021.h"
#include "buff/buff4010722.h"
#include "log/logger.h"

Method4010722::Method4010722()
{
    type = 2222;
    id = 4010722;
    luck = 55;
}

Method4010722::~Method4010722()
{

}

int Method4010722::getLuck(Ground* , Item* item1)
{
    luck = 55 + item1->star;
    return luck;
}

int Method4010722::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff021(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x0033, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010722(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
