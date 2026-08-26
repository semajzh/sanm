#include "method0130121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0130121.h"
#include "log/logger.h"

Method0130121::Method0130121()
{
    type = 21;
    id = 130121;
}

Method0130121::~Method0130121()
{

}

int Method0130121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01301211(item1->g[0], item1->g[0], id, 3));
    Ground::addBuff(ground, ground->buff[6][item1->g[0]], buff);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff01301212(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[2][item1->g[0]], buff2);

    return 1;
}
