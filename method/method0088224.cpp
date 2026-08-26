#include "method0088224.h"
#include "ground.h"
#include "item.h"
#include "buff/buff017.h"
#include "buff/buff0088224.h"
#include "log/logger.h"
#include <QDebug>

Method0088224::Method0088224()
{
    type = 2224;
    id = 88224;
    luck = 70;
}

Method0088224::~Method0088224()
{

}

int Method0088224::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int n0088224 = check0088224(ground, item1->g[0]);
    bool g1 = (qrand() % 100 + 1 > 100 - 40 - n0088224 * 10);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0141 + (g1 ? 1 : 0) * 0x0100, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 180 + n0088224 * 80);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0088224(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return 1;
}

int Method0088224::check0088224(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 88224)
        {
            QSharedPointer<Buff0088224> buff = qSharedPointerCast<Buff0088224>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return 0;
}
