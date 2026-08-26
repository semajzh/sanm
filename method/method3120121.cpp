#include "method3120121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3120121.h"
#include "log/logger.h"

Method3120121::Method3120121()
{
    type = 21;
    id = 3120121;
}

Method3120121::~Method3120121()
{

}

int Method3120121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31201211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31201213(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
