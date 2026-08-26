#include "method4130220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4130220.h"
#include "log/logger.h"

Method4130220::Method4130220()
{
    type = 20;
    id = 4130220;
}

Method4130220::~Method4130220()
{

}

int Method4130220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4130220(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}
