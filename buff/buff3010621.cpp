#include "buff3010621.h"
#include "ground.h"
#include "log/logger.h"

void Buff3010621::run(Ground* ground)
{
    bool b301061 = false;
    Item& item1 = ground->m_group[des/10].m_item[des%10];
    if (item1.strategys[0] == 301061 || item1.strategys[1] == 301061 || item1.strategys[2] == 301061)
    {
        b301061 = true;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x22 + (b301061 ? 1 : 0));
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff30106212>(new Buff30106212(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

    float point1 = Ground::pointbystar(ground, 180, src, method);
    objs = Ground::selectObjN(ground, des, 0x12);
    for (int obj : objs)
    {
        Ground::hloi1(ground, &item1, &ground->m_group[obj/10].m_item[obj%10], method, point1 / (b301061 ? 2 : 1));
    }
}

void Buff30106212::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 20, src, method);
    l0 = Ground::addln(ground, des, 0, point1);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
    Ground::exenter(ground, src, des, id);
}

void Buff30106212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
    Ground::exexit(ground, src, des, id);
}

void Buff30106212::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
