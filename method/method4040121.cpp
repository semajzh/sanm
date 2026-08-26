#include "method4040121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4040121.h"
#include "log/logger.h"

Method4040121::Method4040121()
{
    type = 21;
    id = 4040121;
}

Method4040121::~Method4040121()
{

}

int Method4040121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int g = item1->g[0] / 10;
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4040121(item1->g[0], item1->g[0], id));
    for (int i = 0; i < 3; ++i)
    {
        Ground::addBuff(ground, ground->buff[3][g*10+i], buff);
    }

    return 1;
}

