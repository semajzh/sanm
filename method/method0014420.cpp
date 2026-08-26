#include "method0014420.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0014420.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0014420::Method0014420()
{
    type = 20;
    id = 14420;
}

Method0014420::~Method0014420()
{

}

int Method0014420::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0014420(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

