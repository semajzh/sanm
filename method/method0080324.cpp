#include "method0080324.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0080324.h"
#include "log/logger.h"

Method0080324::Method0080324()
{
    type = 2224;
    id = 80324;
    luck = 35;
}

Method0080324::~Method0080324()
{

}

int Method0080324::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 140, item1->g[0], id);
    float point2 = Ground::pointbystar(ground, 100, item1->g[0], id);
    float k12 = (ground->m_round == 1 || check0080324(ground, item1->g[0])) ? 0 : 50;
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0043, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1, false, 0, k12);
    }
    if (ground->m_round % 2 == 0)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0xA040);
        for (int obj : objs)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point2, false, 0, k12);
        }
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0080324(item1->g[0], item1->g[0], id, 1));
    Ground::addBuff(ground, ground->buff[1][item1->g[0]], buff);

    return 1;
}

bool Method0080324::check0080324(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 80324)
        {
            QSharedPointer<Buff0080324> buff = qSharedPointerCast<Buff0080324>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return false;
}
