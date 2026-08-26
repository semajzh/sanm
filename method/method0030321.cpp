#include "method0030321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0030321.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0030321::Method0030321()
{
    type = 21;
    id = 30321;
}

Method0030321::~Method0030321()
{

}

int Method0030321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 80, item1->g[0], id);
    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0030321(item1->g[0], obj, id, point1));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

