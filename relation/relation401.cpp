#include "relation401.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation401::Relation401()
{
    id = 401;
}

Relation401::~Relation401()
{

}

bool Relation401::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 40104 || item.id == 40401 || item.id == 40402)
        {
            objs.append(item.g[0]);
        }
    }
    if (objs.size() < 3)
    {
        return false;
    }
    Logger::H().printrelation(ground, objs, this);

    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].j[17] += 20;
    }

    return true;
}

