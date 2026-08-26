#include "method4020122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4020122.h"
#include "log/logger.h"

Method4020122::Method4020122()
{
    type = 2222;
    id = 4020122;
    luck = 60;
}

Method4020122::~Method4020122()
{

}

int Method4020122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x5030);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40201221(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x6040);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40201222(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
