#include "buff0160220.h"
#include "buff106.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0160220::run(Ground* ground)
{
    if (ground->m_round % 2 == 0)
    {
        return;
    }

    Item& item = ground->m_group[des/10].m_item[des%10];

    float tb = item.h[0] * 10.0f / 100.0f;
    float point1 = Ground::pointbystar(ground, 10, src, method);
    float fb = item.h[0] * point1 / 100;

    Ground::acttb(ground, &item, &item, method, 0, tb);

    QVector<int> objs = Ground::selectObjN(ground, des, 0xa010, des);
    objs.insert(0, des);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff106(des, obj, method, fb));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
}
