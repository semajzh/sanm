#include "buff009010.h"
#include "ground.h"
#include "log/logger.h"

void Buff009010::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l4 = Ground::addln(ground, des, 4, -15);
    ground->m_group[des/10].m_item[des%10].l[4] += l4;
}

void Buff009010::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[4] -= l4;
}

void Buff009010::run(Ground* ground, int point)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0090102(src, src, method, point));
    Ground::addBuff(ground, ground->buff[0][src], buff);
}

void Buff0090102::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    hlo += meta;
    if (hlo < 3000)
    {
        return;
    }

    hlo -= 3000;
    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x3010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x23);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs2)
        {
            Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 100);
        }
    }
}

void Buff0090102::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);

    hlo += buff->meta;
    if (hlo < 3000)
    {
        return;
    }

    hlo -= 3000;
    QVector<int> objs1 = Ground::selectObjN(ground, des, 0x3010);
    QVector<int> objs2 = Ground::selectObjN(ground, des, 0x23);
    for (int obj1 : objs1)
    {
        for (int obj2 : objs2)
        {
            Ground::actml(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj2/10].m_item[obj2%10], method, 100);
        }
    }
}
