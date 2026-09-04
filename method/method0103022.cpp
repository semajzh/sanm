#include "method0103022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "buff/buff0103022.h"
#include "buff/buff022.h"
#include "log/logger.h"

Method0103022::Method0103022()
{
    type = 2222;
    id = 103022;
    luck = 65;
}

Method0103022::~Method0103022()
{

}

int Method0103022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int g = item1->g[0] / 10;
    if (ground->m_group[g].m_item[0].f[0] != 3 || ground->m_group[g].m_item[1].f[0] != 3 || ground->m_group[g].m_item[2].f[0] != 3)
    {
        return 1;
    }

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        bool b001 = check001(ground, obj);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        if (!b001)
        {
            continue;
        }

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff0103022(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);

        float point = 70;
        QVector<int> objs1 = Ground::selectObjN(ground, item1->g[0], 0x3030);
        QVector<int> objs2 = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
        for (int obj1 : objs1)
        {
            for (int obj2 : objs2)
            {
                Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], id, point);
            }
        }
    }

    return 1;
}

bool Method0103022::check001(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 1)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

int Method0103022::check022(Ground *ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 22)
        {
            QSharedPointer<Buff022> buff = qSharedPointerCast<Buff022>(pbuff);
            return buff->num();
        }
    }
    return 0;
}
