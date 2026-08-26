#include "buff301072.h"
#include "ground.h"
#include "log/logger.h"

void Buff301072::run(Ground* ground)
{
    if (round == ground->m_round)
    {
        return;
    }
    round = ground->m_round;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff3010722>(new Buff3010722(des, obj, method, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}

void Buff3010722::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        l2 += 4;
        ground->m_group[des/10].m_item[des%10].l[2] += 4;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff3010722::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
    Ground::exexit(ground, src, des, id);
}

void Buff3010722::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    if (++count <= 3)
    {
        l2 += 4;
        ground->m_group[des/10].m_item[des%10].l[2] += 4;
    }
    Ground::exupdate(ground, src, des, id);
}
