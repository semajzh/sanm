#include "relation404.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation404::Relation404()
{
    id = 404;
}

Relation404::~Relation404()
{

}

bool Relation404::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 41101 || item.id == 41102 || item.id == 41302)
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
        ground->m_group[obj/10].m_item[obj%10].l[0] -= 6 * objs.size();
    }

    return true;
}

