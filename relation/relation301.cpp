#include "relation301.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation301::Relation301()
{
    id = 301;
}

Relation301::~Relation301()
{

}

bool Relation301::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 30801 || item.id == 30201 || item.id == 30102 || item.id == 31201 || item.id == 31202)
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
        ground->m_group[obj/10].m_item[obj%10].k[9] += 8;
    }

    return true;
}

