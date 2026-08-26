#include "method0013221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013221.h"
#include "log/logger.h"
#include <QSharedPointer>

Method0013221::Method0013221()
{
    type = 21;
    id = 13221;
}

Method0013221::~Method0013221()
{

}

int Method0013221::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = selectObjrow0(ground, item1->g[0]);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00132211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00132212(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return 1;
}

int Method0013221::selectObjrow0(Ground* ground, int pos)
{
    int g = pos / 10;
    QVector<int> objs;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].g[1] == 0 && ground->m_group[g].m_item[i].h[0] > 0)
        {
            objs.append(g*10+i);
        }
    }
    if (objs.size() == 0)
    {
        for (int i = 0; i < 3; ++i)
        {
            if (ground->m_group[g].m_item[i].h[0] > 0)
            {
                objs.append(g*10+i);
            }
        }
    }
    int size = objs.size();
    for (int i = 0; i < size - 1; ++i)
    {
        objs.takeAt(qrand() % objs.size());
    }
    return (objs.size() > 0) ? objs.front() : -1;
}
