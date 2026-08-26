#include "relation402.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation402::Relation402()
{
    id = 402;
}

Relation402::~Relation402()
{

}

bool Relation402::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 40401 || item.id == 40702)
        {
            objs.append(item.g[0]);
        }
    }
    if (objs.size() < 2)
    {
        return false;
    }
    Logger::H().printrelation(ground, objs, this);

    for (int obj : objs)
    {
        ground->m_group[obj/10].m_item[obj%10].l[2] -= 6;
    }

    return true;
}

