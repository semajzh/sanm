#include "method0014521.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014521.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0014521::Method0014521()
{
    type = 21;
    id = 14521;
}

Method0014521::~Method0014521()
{

}

int Method0014521::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x12, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014521(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[5][obj], buff);
    }

    return 1;
}

