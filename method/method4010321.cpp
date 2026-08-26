#include "method4010321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4010321.h"
#include "log/logger.h"

Method4010321::Method4010321()
{
    type = 21;
    id = 4010321;
}

Method4010321::~Method4010321()
{

}

int Method4010321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4010321(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff);

    return 1;
}
