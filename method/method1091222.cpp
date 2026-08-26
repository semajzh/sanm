#include "method1091222.h"
#include "ground.h"
#include "item.h"
#include "buff/buff1091222.h"
#include "buff/buff013.h"
#include "buff/buff016.h"
#include "log/logger.h"

Method1091222::Method1091222()
{
    type = 22;
    id = 1091222;
    luck = 65;
}

Method1091222::~Method1091222()
{

}

int Method1091222::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1091222(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[0][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0042 + qrand() % 2, item1->g[0]);
    for (int obj : objs)
    {
        int point = Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 200);
        if (point / J02_FLAG_1 > 0)
        {
            if (qrand() % 2 > 0)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff013(item1->g[0], obj, id, 1));
                Ground::addBuff(ground, ground->buff[1][obj], buff);

            }
            else
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff016(item1->g[0], obj, id, 1));
                Ground::addBuff(ground, ground->buff[1][obj], buff);
            }
        }
    }

    return 1;
}
