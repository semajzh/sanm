#include "method3010921.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3010921.h"
#include "log/logger.h"
#include <QSharedPointer>

Method3010921::Method3010921()
{
    type = 21;
    id = 3010921;
}

Method3010921::~Method3010921()
{

}

int Method3010921::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30109211(item1->g[0], obj, id, 4));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff30109212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

