#include "method0101021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0101021.h"
#include "log/logger.h"

Method0101021::Method0101021()
{
    type = 21;
    id = 101021;
}

Method0101021::~Method0101021()
{

}

int Method0101021::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int g = item1->g[0] / 10;
    if (ground->m_group[g].m_item[0].f[0] != 1 || ground->m_group[g].m_item[1].f[0] != 1 || ground->m_group[g].m_item[2].f[0] != 1)
    {
        return 1;
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0211);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0101021(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    objs = Ground::selectObjN(ground, item1->g[0], 0x23);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01010212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }


    return 1;
}
