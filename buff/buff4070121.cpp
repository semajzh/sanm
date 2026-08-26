#include "buff4070121.h"
#include "ground.h"
#include "log/logger.h"

void Buff4070121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 12, src, method);
    l0 = Ground::addln(ground, des, 0, -point1 - ground->m_group[src/10].m_item[src%10].i[2] / 50);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    i2base = ground->m_group[des/10].m_item[des%10].i[2];
}

void Buff4070121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    for (int i = 0; i < 3; ++i)
    {
        Ground::addi2(ground, des, -i2[i]);
    }
}

void Buff4070121::run(Ground* ground, int)
{
    if (ground->m_round == round || bl >= 10)
    {
        return;
    }
    round = ground->m_round;
    addbl(ground);
    if (bl >= 10)
    {
        actbr(ground);
    }
}

void Buff4070121::run(Ground* ground)
{
    if (bl >= 10)
    {
        return;
    }
    if (ground->m_group[des/10].m_item[des%10].i[2] - i2base >= 60)
    {
        i2base += 60;
        addbl(ground);
    }
    if (bl >= 10)
    {
        actbr(ground);
    }
}

void Buff4070121::addbl(Ground* ground)
{
    if (++bl > 10)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 25, src, method);
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[des/10].m_item[i].h[0] > 0)
        {
            Ground::addi2(ground, i, point1);
            i2[i] += point1;
        }
    }

    if (ground->m_group[des/10].m_item[des%10].i[2] - i2base >= 60)
    {
        i2base += 60;
        addbl(ground);
    }
}

void Buff4070121::actbr(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 260, src, method);
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        float i2 = (item1.i[2] - item2.i[2] > 0) ? (item1.i[2] - item2.i[2]) : 0;
        Ground::actbr(ground, &item1, &item2, method, point1 + i2);
    }
}
