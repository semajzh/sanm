#include "method6000221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff6000221.h"
#include "log/logger.h"

Method6000221::Method6000221()
{
    type = 21;
    id = 6000221;
}

Method6000221::~Method6000221()
{

}

int Method6000221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff6000221(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}
