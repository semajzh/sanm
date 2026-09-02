#include "method0018222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff015.h"
#include "log/logger.h"

Method0018222::Method0018222()
{
    type = 2222;
    id = 18222;
    luck = 45;
}

Method0018222::~Method0018222()
{

}

int Method0018222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042, item1->g[0]);
    for (int obj : objs)
    {
        Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 172.5f);

        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(item1->g[0], obj, id, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
