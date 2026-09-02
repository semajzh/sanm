#include "method0090222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0090222.h"
#include "log/logger.h"

Method0090222::Method0090222()
{
    type = 2222;
    id = 90222;
    luck = 75;
}

Method0090222::~Method0090222()
{

}

int Method0090222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 120, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0031, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0090222(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
    if (item1->g[1] == 0)
    {
        Ground::hloi(ground, item1, item1, id, point1, item1->i[1] + item1->i[3]);
    }

    return 1;
}
