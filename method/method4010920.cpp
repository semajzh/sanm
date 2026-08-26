#include "method4010920.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4010920.h"
#include "log/logger.h"

Method4010920::Method4010920()
{
    type = 20;
    id = 4010920;
}

Method4010920::~Method4010920()
{

}

int Method4010920::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010920(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40109202(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
