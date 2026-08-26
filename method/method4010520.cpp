#include "method4010520.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4010520.h"
#include "log/logger.h"

Method4010520::Method4010520()
{
    type = 20;
    id = 4010520;
}

Method4010520::~Method4010520()
{

}

int Method4010520::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010520(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}
