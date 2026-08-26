#include "relation403.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation403::Relation403()
{
    id = 403;
}

Relation403::~Relation403()
{

}

bool Relation403::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 40102 || item.id == 40105)
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
        ground->m_group[obj/10].m_item[obj%10].l[3] -= 12;
        ground->m_group[obj/10].m_item[obj%10].l[5] -= 12;
    }

    return true;
}

