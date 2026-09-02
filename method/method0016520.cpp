#include "method0016520.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0016520.h"
#include "log/logger.h"

Method0016520::Method0016520()
{
    type = 20;
    id = 16520;
}

Method0016520::~Method0016520()
{

}

int Method0016520::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0016520(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff);

    return 1;
}
