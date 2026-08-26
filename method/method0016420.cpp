#include "method0016420.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016420.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0016420::Method0016420()
{
    type = 20;
    id = 16420;
}

Method0016420::~Method0016420()
{

}

int Method0016420::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016420(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

