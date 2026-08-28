#include "method2160222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2160222.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2160222::Method2160222()
{
    type = 22;
    id = 2160222;
    luck = 75;
}

Method2160222::~Method2160222()
{

}

int Method2160222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x1031);
    if (objs.size() <= 0)
    {
        return 1;
    }
    int obj = objs[0];

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21602221(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    float point2 = Ground::pointbystar(ground, 50, item1->g[0], id);
    float jl = Ground::addbyix(ground, point2, item1->i[1]);

    if (qrand() % 100 + 1 > 100 - jl)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21602222(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
    if (qrand() % 100 + 1 > 100 - jl)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21602223(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }
    if (qrand() % 100 + 1 > 100 - jl)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff21602224(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return 1;
}
