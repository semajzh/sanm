#include "method3150221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff3150221.h"
#include "log/logger.h"

Method3150221::Method3150221()
{
    type = 21;
    id = 3150221;
}

Method3150221::~Method3150221()
{

}

int Method3150221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff31502211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff31502212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[5][obj], buff2);
    }

    return 1;
}

QVector<int> Method3150221::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].f[1] != 1)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}
