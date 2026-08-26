#include "buff0060221.h"
#include "ground.h"
#include "log/logger.h"

void Buff0060221::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 10, src, method);
    int r = (ground->m_round - 1) * point1;
    if (qrand() % 100 + 1 <= 100 - 60 - r)
    {
        return;
    }

    int obj = des;
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00602212(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QVector<int> objs = Ground::selectObjN(ground, des, 0x11, des);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff00602212(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff00602212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, src, method);
    l0 = point1 + ground->m_group[src/10].m_item[src%10].i[2] / 22;
    l0 = Ground::addln(ground, des, 0, -l0);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff00602212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (l0 != 0.0f)
    {
        ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    }
}
