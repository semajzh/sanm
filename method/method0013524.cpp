#include "method0013524.h"
#include "ground.h"
#include "item.h"
#include "buff/buff015.h"
#include "log/logger.h"
#include <QDebug>

Method0013524::Method0013524()
{
    type = 2224;
    id = 13524;
    luck = 45;
}

Method0013524::~Method0013524()
{

}

int Method0013524::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 0;
    }

    Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 300);
    if (check015(ground, obj))
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 100);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}

bool Method0013524::check015(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 15)
        {
            return true;
        }
    }
    return false;
}
