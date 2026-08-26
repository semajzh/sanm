#include "method0013424.h"
#include "ground.h"
#include "item.h"
#include "buff/buff011.h"
#include "buff/buff012.h"
#include "log/logger.h"
#include <QDebug>

Method0013424::Method0013424()
{
    type = 2224;
    id = 13424;
    luck = 40;
}

Method0013424::~Method0013424()
{

}

int Method0013424::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 280, item1->g[0], id);
    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 0;
    }

    Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

    bool b012 = check012(ground, obj);
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
    if (b012 && qrand() % 100 + 1 > 100 - 50)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}

bool Method0013424::check012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 12)
        {
            return true;
        }
    }
    return false;
}
