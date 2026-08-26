#include "method2010420.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010420.h"
#include "log/logger.h"

Method2010420::Method2010420()
{
    type = 20;
    id = 2010420;
}

Method2010420::~Method2010420()
{

}

int Method2010420::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2010420(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

