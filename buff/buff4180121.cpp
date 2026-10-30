#include "buff4180121.h"
#include "ground.h"
#include "method/method.h"
#include "log/logger.h"

void Buff4180121::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Item& item = ground->m_group[des/10].m_item[des%10];
    const int methods[] = {12022, 70222, 20721, 14824};
    int index = Ground::getMaxiIndex(ground, des);
    if (index >= 0 && !checkMethod(ground, methods[index]))
    {
        item.methods[3] = methods[index];
        item.methodstars[3] = ground->m_group[src/10].m_item[src%10].methodstars[0];
        int granted = methods[index];
        if (granted == 20721)
        {
            Method::getMethod(granted)->run(ground, &item, src);
        }
    }
}

void Buff4180121::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Item& item = ground->m_group[des/10].m_item[des%10];
    item.methods[3] = 2223;
    item.methodstars[3] = item.star;
}

void Buff4180121::run(Ground* ground, int n)
{
    Item& item = ground->m_group[des/10].m_item[des%10];
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;
    float point1 = Ground::pointbystar(ground, 50, src, method);
    float point2 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    if (qrand() % 100 + 1 <= 100 - point2)
    {
        return;
    }
    float point3 = Ground::pointbystar(ground, 100, src, method);
    float point4 = Ground::addbyix(ground, point3, item.i[n]);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
    for (int obj : objs)
    {
        Ground::actml(ground, &item, &ground->m_group[obj/10].m_item[obj%10], method, point4);
    }
}

bool Buff4180121::checkMethod(Ground* ground, int m)
{
    for (const Item& item : ground->m_group[des/10].m_item)
    {
        for (int method : item.methods)
        {
            if (method == m)
            {
                return true;
            }
        }
    }
    return false;
}
