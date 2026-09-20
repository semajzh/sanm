#include "buff117012.h"
#include "buff1170121.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff117012::run(Ground* ground)
{
    float point = Ground::addbyix(ground, 65, ground->m_group[src/10].m_item[src%10].i[2]);
    QVector<int> objs = Ground::selectObjN(ground, des, 0xa021);
    for (int obj : objs)
    {
        Ground::actbr(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
        Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point);
    }
}

void Buff117012::run(Ground* ground, int )
{
    if (qrand() % 100 + 1 <= 100 - 75)
    {
        return;
    }
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff11701213(src, des, method));
    Ground::addBuff(ground, ground->buff[3][des], buff);
}
