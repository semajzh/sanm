#include "method0020721.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0020721.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0020721::Method0020721()
{
    type = 21;
    id = 20721;
}

Method0020721::~Method0020721()
{

}

int Method0020721::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0020721(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

