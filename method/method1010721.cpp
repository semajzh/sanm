#include "method1010721.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1010721.h"
#include "log/logger.h"
#include <QSharedPointer>

Method1010721::Method1010721()
{
    type = 21;
    id = 1010721;
}

Method1010721::~Method1010721()
{

}

int Method1010721::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1010721(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

