#include "method5000120.h"
#include "ground.h"
#include "item.h"
#include "buff/buff5000120.h"
#include "log/logger.h"

Method5000120::Method5000120()
{
    type = 20;
    id = 5000120;
}

Method5000120::~Method5000120()
{

}

int Method5000120::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff5000120(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
