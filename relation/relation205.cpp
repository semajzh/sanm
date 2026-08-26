#include "relation205.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation205::Relation205()
{
    id = 205;
}

Relation205::~Relation205()
{

}

bool Relation205::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 20101 || item.id == 20301)
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
        ground->m_group[obj/10].m_item[obj%10].l[1] -= 6;
    }

    return true;
}

