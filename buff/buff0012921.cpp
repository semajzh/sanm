#include "buff0012921.h"
#include "ground.h"
#include "buff003.h"
#include "log/logger.h"

void Buff0012921::run(Ground* ground)
{
    if (ground->m_round == 2 || ground->m_round == 4)
    {
        QVector<int> objs = Ground::selectObjN(ground, des, 6);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff003(des, obj, method, 2));
            Ground::addBuff(ground, ground->buff[1][obj], buff);
        }
    }

    if (qrand() % 100 + 1 <= 100 - 60)
    {
        return;
    }
    if (ground->m_round % 2 == 1)
    {
        float point1 = Ground::pointbystar(ground, 100, src, method);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x23);
        for (int obj : objs)
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
        }
    }
    if (ground->m_round % 2 == 0)
    {
        float point2 = Ground::pointbystar(ground, 280, src, method);
        QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
        for (int obj : objs)
        {
            Ground::actml(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point2);
        }
    }
}
