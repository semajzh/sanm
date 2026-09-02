#include "method0017222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff002.h"
#include "log/logger.h"

Method0017222::Method0017222()
{
    type = 2222;
    id = 17222;
    luck = 60;
}

Method0017222::~Method0017222()
{

}

int Method0017222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    for (int n = 0; n < 2; ++n)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
        for (int obj : objs)
        {
            Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 172.5);

            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}
