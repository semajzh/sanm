#include "method2170221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2170221.h"
#include "log/logger.h"

Method2170221::Method2170221()
{
    type = 21;
    id = 2170221;
}

Method2170221::~Method2170221()
{

}

int Method2170221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21702211(item1->g[0], obj, id, 3));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21702213(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[4][item1->g[0]], buff);

    return 1;
}

QVector<int> Method2170221::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[4] != 0)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        objs.append(g*10+i);
    }
    return objs;
}
