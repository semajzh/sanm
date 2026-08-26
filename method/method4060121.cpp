#include "method4060121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4060121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method4060121::Method4060121()
{
    type = 21;
    id = 4060121;
}

Method4060121::~Method4060121()
{

}

int Method4060121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4060121(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[8][obj], buff);
    }

    return 1;
}

