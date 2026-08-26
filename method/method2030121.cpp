#include "method2030121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2030121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2030121::Method2030121()
{
    type = 21;
    id = 2030121;
}

Method2030121::~Method2030121()
{

}

int Method2030121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20301211(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff20301212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[4][obj], buff1);

    return 1;
}

