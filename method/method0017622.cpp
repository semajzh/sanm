#include "method0017622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff012.h"
#include "log/logger.h"

Method0017622::Method0017622()
{
    type = 2222;
    id = 17622;
    luck = 45;
}

Method0017622::~Method0017622()
{

}

int Method0017622::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actml(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 230);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff012(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
