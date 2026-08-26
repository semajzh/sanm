#include "method0017422.h"
#include "ground.h"
#include "item.h"
#include "buff/buff013.h"
#include "buff/buff0017422.h"
#include "log/logger.h"

Method0017422::Method0017422()
{
    type = 2222;
    id = 17422;
    luck = 40;
}

Method0017422::~Method0017422()
{

}

int Method0017422::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        bool b013 = check013(ground, obj);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        if (b013)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0017422(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

bool Method0017422::check013(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 13)
        {
            return true;
        }
    }
    return false;
}
