#include "method4110121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4110121.h"
#include "log/logger.h"

Method4110121::Method4110121()
{
    type = 21;
    id = 4110121;
}

Method4110121::~Method4110121()
{

}

int Method4110121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41101211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    objs = Ground::selectObjN(ground, item1->g[0], 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41101212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
