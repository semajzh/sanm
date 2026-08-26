#include "relation181.h"
#include "ground.h"
#include "item.h"
#include "buff/buff181.h"
#include "log/logger.h"
#include <QSharedPointer>

Relation181::Relation181()
{
    id = 181;
}

Relation181::~Relation181()
{

}

bool Relation181::run(Ground* ground, int group)
{
    QVector<int> objs;
    for (Item& item : ground->m_group[group].m_item)
    {
        if (item.id == 10301 || item.id == 10801)
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
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff181(obj, obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

