#include "relation101.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation101::Relation101()
{
    id = 101;
}

Relation101::~Relation101()
{

}

bool Relation101::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 10113 || item.id == 10111 || item.id == 10114 || item.id == 10201 || item.id == 10302)
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
        ground->m_group[obj/10].m_item[obj%10].j[13] += 6;
    }

    return true;
}

