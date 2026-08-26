#include "method1010420.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010420.h"
#include "log/logger.h"

Method1010420::Method1010420()
{
    type = 20;
    id = 1010420;
}

Method1010420::~Method1010420()
{

}

int Method1010420::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010420(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10104202(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
