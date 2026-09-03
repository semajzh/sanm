#include "method0019124.h"
#include "ground.h"
#include "item.h"
#include "buff/buff017.h"
#include "log/logger.h"

Method0019124::Method0019124()
{
    type = 2224;
    id = 19124;
    luck = 35;
}

Method0019124::~Method0019124()
{

}

int Method0019124::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 0;
    }

    Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 253);
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(item1->g[0], obj, id, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    return 1;
}
