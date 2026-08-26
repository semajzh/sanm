#include "method3020122.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001.h"
#include "buff/buff007.h"
#include "log/logger.h"


Method3020122::Method3020122()
{
    type = 2222;
    id = 3020122;
    luck = 60;
}

Method3020122::~Method3020122()
{

}

int Method3020122::getLuck(Ground* , Item* item1)
{
    luck = 60 + item1->star;
    return luck;
}

int Method3020122::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);
    float point1 = Ground::pointbystar(ground, 220, item1->g[0], id);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x0041, item1->g[0]);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    objs = selectObj001(ground, item1->g[0]);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff007(item1->g[0], obj, id, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::actml(ground, item1, &item2, id, point1);

        if (qrand() % 100 + 1 > 100 - 40 - item1->i[1]/36.0)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff007(item1->g[0], obj, id, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    return 1;
}

QVector<int> Method3020122::selectObj001(Ground* ground, int pos)
{
    QVector<int> objs;

    bool hl = false;
    for (QSharedPointer<Buff> buff : ground->buff[1][pos])
    {
        if (buff->id == 17)
        {
            hl = true;
            break;
        }
    }

    int size = hl ? 6 : 3;
    for (int j = 0; j < size; ++j)
    {
        int g = hl ? j/3 : 1 - pos/10;
        int i = hl ? j%3 : j;
        if (ground->m_group[g].m_item[i].h[0] <= 0)
        {
            continue;
        }
        if (pos == g*10+i)
        {
            continue;
        }
        bool b001 = false;
        for (QSharedPointer<Buff> buff : ground->buff[1][g*10+i])
        {
            if (buff->id == 1)
            {
                b001 = true;
                break;
            }
        }
        if (b001)
        {
            objs.append(g*10+i);
        }
    }

    return objs;
}
