#include "method2010321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010321.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2010321::Method2010321()
{
    type = 21;
    id = 2010321;
}

Method2010321::~Method2010321()
{

}

int Method2010321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010321(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

