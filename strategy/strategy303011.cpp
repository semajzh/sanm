#include "strategy303011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff303011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy303011::Strategy303011()
{
    id = 303011;
}

Strategy303011::~Strategy303011()
{

}

bool Strategy303011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = selectObj(ground, item1->g[0]);
    objs.insert(0, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff303011(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

QVector<int> Strategy303011::selectObj(Ground* ground, int obj)
{
    QVector<int> objs;
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        if (i == obj % 10)
        {
            continue;
        }
        if (ground->m_group[g].m_item[i].g[1] == ground->m_group[obj/10].m_item[obj%10].g[1])
        {
            objs.append(g*10+i);
        }
    }
    return objs;
}
