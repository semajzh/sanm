#include "strategy001480.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001480.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001480::Strategy001480()
{
    id = 1480;
}

Strategy001480::~Strategy001480()
{

}

bool Strategy001480::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = selectObjg1(ground, item1->g[0]);
    if (obj >= 0)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001480(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

int Strategy001480::selectObjg1(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] > 0 && ground->m_group[g].m_item[i].g[1] == 1)
        {
            objs.append(g*10+i);
        }
    }

    return (objs.size() == 0) ? -1 : objs.at(qrand() % objs.size());
}
