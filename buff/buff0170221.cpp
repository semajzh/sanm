#include "buff0170221.h"
#include "ground.h"
#include "item.h"
#include "log/logger.h"

void Buff0170221::run(Ground* ground)
{
    if (ground->m_round < 2)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 40, des, method);
    QVector<int> objs = Ground::selectObjN(ground, des, 0x1020);
    objs += Ground::selectObjN(ground, des, 0x3020);
    for (int obj : objs)
    {
        if (qrand() % 100 + 1 <= 100 - point1)
        {
            continue;
        }
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01702212(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[6][obj], buff);
    }
}

void Buff01702212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    Item& item1 = ground->m_group[src/10].m_item[src%10];
    float f = 1 + 0.08f * (ground->m_round - 2);

    float point1 = Ground::pointbystar(ground, 20, src, method);
    i0 = Ground::addbyix(ground, point1, item1.i[0] + item1.i[1]) * f;
    index = Ground::getMaxiIndex(ground, des);
    if (index >= 0)
    {
        ground->m_group[des/10].m_item[des%10].i[index] -= i0;
    }

    float point2 = Ground::pointbystar(ground, 10, src, method);
    k0 = Ground::addbyix(ground, point2, item1.i[2]) * f;
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;

    Ground::exenter(ground, src, des, id);
}

void Buff01702212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    if (index >= 0)
    {
        ground->m_group[des/10].m_item[des%10].i[index] += i0;
    }
    ground->m_group[des/10].m_item[des%10].k[0] += k0;
    Ground::exexit(ground, src, des, id);
}

void Buff01702212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
