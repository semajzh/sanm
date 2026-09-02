#include "method0010622.h"
#include "ground.h"
#include "item.h"
#include "buff/buff111.h"
#include "log/logger.h"

Method0010622::Method0010622()
{
    type = 2222;
    id = 10622;
    luck = 50;
}

Method0010622::~Method0010622()
{

}

int Method0010622::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 260, item1->g[0], id);
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0131);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        Ground::hloi1(ground, item1, &ground->m_group[obj/10].m_item[obj%10], id, point1);
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff111(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    return 1;
}
