#include "method2020222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2020222.h"
#include "log/logger.h"

Method2020222::Method2020222()
{
    type = 22;
    id = 2020222;
    luck = 100;
}

Method2020222::~Method2020222()
{

}

int Method2020222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2020222(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
