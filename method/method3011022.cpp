#include "method3011022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff016.h"
#include "buff/buff3011022.h"
#include "log/logger.h"

Method3011022::Method3011022()
{
    type = 2222;
    id = 3011022;
    luck = 40;
}

Method3011022::~Method3011022()
{

}

int Method3011022::getLuck(Ground* , Item* item1)
{
    bool b301101 = (item1->strategys[0] == 301101 || item1->strategys[1] == 301101 || item1->strategys[2] == 301101);
    luck = 40 + (b301101 ? 15 : 0);
    return luck;
}

int Method3011022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    float point1 = Ground::pointbystar(ground, 250, item1->g[0], id);
    bool b301101 = (item1->strategys[0] == 301101 || item1->strategys[1] == 301101 || item1->strategys[2] == 301101);
    objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1 * (b301101 ? (1 - 0.5) : 1));

        if (item1->star > 0)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff3011022(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
