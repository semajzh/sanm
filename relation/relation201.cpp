#include "relation201.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation201::Relation201()
{
    id = 201;
}

Relation201::~Relation201()
{

}

bool Relation201::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 20103 || item.id == 20501 || item.id == 20801)
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
        ground->m_group[obj/10].m_item[obj%10].i[1] *= 1 + 0.06;
        ground->m_group[obj/10].m_item[obj%10].i[2] *= 1 + 0.06;
    }

    return true;
}

