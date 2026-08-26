#include "method1091321.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1091321.h"
#include "log/logger.h"

Method1091321::Method1091321()
{
    type = 21;
    id = 1091321;
}

Method1091321::~Method1091321()
{

}

int Method1091321::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = selectObj(ground, item1->g[0]);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10913211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff10913212(item1->g[0], item1->g[0], id, obj));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff);

    return 1;
}

int Method1091321::selectObj(Ground* ground, int obj)
{
    int obj1 = -1, max = 0;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (g*10+i == obj)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].i[2] > max)
        {
            max = ground->m_group[g].m_item[i].i[2];
            obj1 = g*10+i;
        }
    }
    return obj1;
}
