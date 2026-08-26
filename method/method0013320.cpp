#include "method0013320.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013320.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0013320::Method0013320()
{
    type = 20;
    id = 13320;
}

Method0013320::~Method0013320()
{

}

int Method0013320::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0013320(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

