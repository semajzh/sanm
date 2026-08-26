#include "method3010520.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3010520.h"
#include "log/logger.h"

Method3010520::Method3010520()
{
    type = 20;
    id = 3010520;
}

Method3010520::~Method3010520()
{

}

int Method3010520::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3010520(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

