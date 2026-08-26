#include "method0070222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff005.h"
#include "buff/buff0070222.h"
#include "log/logger.h"
#include <QDebug>

Method0070222::Method0070222()
{
    type = 2222;
    id = 70222;
    luck = 55;
}

Method0070222::~Method0070222()
{

}

int Method0070222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        if (check005(ground, obj))
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0070222(item1->g[0], obj, id, 1));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff005(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method0070222::check005(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 5)
        {
            return true;
        }
    }
    return false;
}
