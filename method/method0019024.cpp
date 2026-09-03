#include "method0019024.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0019024.h"
#include "log/logger.h"

Method0019024::Method0019024()
{
    type = 2224;
    id = 19024;
    luck = 40;
}

Method0019024::~Method0019024()
{

}

int Method0019024::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    int obj = ground->target2223;
    if (obj == -1 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return 0;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0019024(item1->g[0], obj, id, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
    Ground::actbr(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, 287.5f);

    return 1;
}
