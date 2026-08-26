#include "buff4010321.h"
#include "buff111.h"
#include "ground.h"
#include "log/logger.h"

void Buff4010321::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 240, src, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0xA010);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff40103212(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);

        QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff111(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff2);

        Ground::hloi1(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, point1);
    }
}

void Buff40103212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 16, src, method);
    float point = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
    l0 = Ground::addln(ground, des, 0, -point);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff40103212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
