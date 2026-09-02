#include "method0017022.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0017022.h"
#include "log/logger.h"

Method0017022::Method0017022()
{
    type = 2222;
    id = 17022;
    luck = 65;
}

Method0017022::~Method0017022()
{

}

int Method0017022::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 130, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0032);
    for (int obj : objs)
    {
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0017022(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
