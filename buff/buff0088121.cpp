#include "buff0088121.h"
#include "ground.h"
#include "log/logger.h"

void Buff0088121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    for (int x = 0; x < 4; ++x)
    {
        ground->m_group[des/10].m_item[des%10].i[x] -= i[x];
        i[x] = 0;
    }
}

void Buff0088121::run(Ground* ground)
{
    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }

    if (qrand() % 100 + 1 <= 100 - 50 || ++count > 5)
    {
        return;
    }

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    int x = getmaxi(ground);
    i[x] += 10;
    item1.i[x] += 10;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        if (item1.i[0] > item1.i[1])
        {
            Ground::actbr(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 80);
        }
        else
        {
            Ground::actml(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, 80);
        }
    }
}

int Buff0088121::getmaxi(Ground* ground)
{
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    int i = 0, ix = item1.i[0];
    if (ix < item1.i[1])
    {
        i = 1;
        ix = item1.i[1];
    }
    if (ix < item1.i[2])
    {
        i = 2;
        ix = item1.i[2];
    }
    if (ix < item1.i[3])
    {
        i = 3;
        ix = item1.i[3];
    }
    return i;
}
