#include "method2160121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2160121.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2160121::Method2160121()
{
    type = 21;
    id = 2160121;
}

Method2160121::~Method2160121()
{

}

int Method2160121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0111, item1->g[0]);
    if (objs.size() <= 0)
    {
        return 1;
    }

    float point1 = Ground::pointbystar(ground, 40, item1->g[0], id);
    float point2 = Ground::addbyix(ground, point1, item1->i[2]);
    float point3 = (point2 >= 100) ? 99 : point2;
    int give = item1->h[0] * point3 / 100;
    int obj = objs[0];

    item1->h[0] -= give;
    ground->m_group[obj/10].m_item[obj%10].h[0] += give;

    QSharedPointer<Buff> buff1 = QSharedPointer<Buff>(new Buff21601211(item1->g[0], item1->g[0], id, obj));
    Ground::addBuff(ground, ground->buff[3][item1->g[0]], buff1);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff21601212(item1->g[0], obj, id, give));
    Ground::addBuff(ground, ground->buff[7][obj], buff2);

    return 1;
}
