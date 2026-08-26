#include "buff2010121.h"
#include "ground.h"
#include "log/logger.h"

void Buff20101211::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 18, src, method);//18 + 0.54 * ground->m_group[src/10].m_item[src%10].star/2;
    i2 = point1 + ground->m_group[src/10].m_item[src%10].i[1] / 23.12; //322.97,13.97
    Ground::addi2(ground, des, i2);
}

void Buff20101211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addi2(ground, des, -i2);
}

void Buff20101212::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 100, src, method);//100 + 3.2 * ground->m_group[src/10].m_item[src%10].star/2;
    float point2 = Ground::pointbystar(ground, 90, src, method);//90 + 2.87 * ground->m_group[src/10].m_item[src%10].star/2;

    Item& item1 = ground->m_group[des/10].m_item[des%10];
    QVector<int> objs = Ground::selectObjN(ground, des, 0x13);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::hloi1(ground, &item1, &item2, method, point1);
    }

    objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        Item& item2 = ground->m_group[obj/10].m_item[obj%10];
        Ground::exremove(ground, obj, 1);
        Ground::hloi1(ground, &item1, &item2, method, point2);
    }
}
