#include "method0104021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0104021.h"
#include "log/logger.h"

Method0104021::Method0104021()
{
    type = 21;
    id = 104021;
}

Method0104021::~Method0104021()
{

}

int Method0104021::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int g = item1->g[0] / 10;
    if (ground->m_group[g].m_item[0].f[0] != 4 || ground->m_group[g].m_item[1].f[0] != 4 || ground->m_group[g].m_item[2].f[0] != 4)
    {
        return 1;
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0104021(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}
