#include "method2010121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2010121::Method2010121()
{
    type = 21;
    id = 2010121;
}

Method2010121::~Method2010121()
{

}

int Method2010121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20101211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20101212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}

