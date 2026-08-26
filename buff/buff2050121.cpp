#include "buff2050121.h"
#include "ground.h"
#include "log/logger.h"

void Buff2050121::run(Ground* ground)
{
//    float point1 = Ground::pointbystar(ground, 40, src, method);
//    float point2 = Ground::pointbystar(ground, 5, src, method);
    float point1 = 40 + 1.6 * ground->m_group[src/10].m_item[src%10].star/2;
    float point2 = 5 + 0.2 * ground->m_group[src/10].m_item[src%10].star/2;

    int g = des / 10;
    int i = des % 10;
    Item& item1 = ground->m_group[g].m_item[i];
    int rc = ground->data[g*10+0].actrc + ground->data[g*10+1].actrc + ground->data[g*10+2].actrc;
    if (rc > 9)
    {
        rc = 9;
    }
    Logger::H().printcustom(ground, 2050121, des, rc);
    int tf = qrand() % 3 + 1;
//    int tf = qrand() % 5 / 2 + 1; // 2:2:1

    for (int j = 0; j < tf; ++j)
    {
        QVector<int> objs = Ground::selectObjN(ground, item1.g[0], 0x22);
        for (int obj : objs)
        {
            Item& item2 = ground->m_group[obj/10].m_item[obj%10];
            Ground::actbr(ground, &item1, &item2, method, point1 + rc * point2);
            Ground::actml(ground, &item1, &item2, method, point1 + rc * point2);
        }

        if (++count >= 3)
        {
            count = 0;
            QVector<int> objs = Ground::selectObjN(ground, item1.g[0], 0xA020);
            for (int obj : objs)
            {
                Item& item2 = ground->m_group[obj/10].m_item[obj%10];
                Ground::acttb(ground, &item1, &item2, method, item1.i[0]+item1.i[1]);
            }
        }
    }
}
