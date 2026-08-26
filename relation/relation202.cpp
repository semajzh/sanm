#include "relation202.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation202::Relation202()
{
    id = 202;
}

Relation202::~Relation202()
{

}

bool Relation202::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 20102 || item.id == 20106 || item.id == 20104 || item.id == 20109 || item.id == 20105)
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
        ground->m_group[obj/10].m_item[obj%10].j[0] += 10;
    }

    return true;
}

