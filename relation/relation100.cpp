#include "relation100.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation100::Relation100()
{
    id = 100;
}

Relation100::~Relation100()
{

}

bool Relation100::run(Ground* ground, int g)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[g].m_item)
    {
        if (item.id == 10101)
        {
            objs.append(item.g[0]);
        }
    }
    if (objs.size() < 1)
    {
        return false;
    }
    Logger::H().printrelation(ground, objs, this);

    int f[5] = {0};
    for (int i = 0; i < 3; ++i)
    {
        ++f[ground->m_group[g].m_item[i].f[0]];
    }
    if (f[1] > 1)
    {
        for (int i = 0; i < 3; ++i)
        {
            ground->m_group[g].m_item[i].i[0] += ground->m_group[g].m_item[i].i[8] * 0.05f;
            ground->m_group[g].m_item[i].i[1] += ground->m_group[g].m_item[i].i[9] * 0.05f;
            ground->m_group[g].m_item[i].i[2] += ground->m_group[g].m_item[i].i[10] * 0.05f;
            ground->m_group[g].m_item[i].i[3] += ground->m_group[g].m_item[i].i[11] * 0.05f;
        }
    }

    return true;
}

