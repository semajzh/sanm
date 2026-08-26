#include "buff0100220.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff0100220::run(Ground* ground, int obj)
{
    float point1 = Ground::pointbystar(ground, 60, src, method);
    if (qrand() % 100 + 1 < 100 - point1)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff01002202(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[6][obj], buff);
}

void Buff01002202::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 3)
    {
        float point1 = Ground::pointbystar(ground, 50, src, method);
        float ii0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        float ii1 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        ii0 = Ground::addin(ground, des, 0, -ii0);
        ii1 = Ground::addin(ground, des, 1, -ii1);
        i0 += ii0;
        i1 += ii1;
        ground->m_group[des/10].m_item[des%10].i[0] += ii0;
        ground->m_group[des/10].m_item[des%10].i[1] += ii1;
    }
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff01002202::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff01002202::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 3)
    {
        float point1 = Ground::pointbystar(ground, 50, src, method);
        float ii0 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[1]);
        float ii1 = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[2]);
        ii0 = Ground::addin(ground, des, 0, -ii0);
        ii1 = Ground::addin(ground, des, 1, -ii1);
        i0 += ii0;
        i1 += ii1;
        ground->m_group[des/10].m_item[des%10].i[0] += ii0;
        ground->m_group[des/10].m_item[des%10].i[1] += ii1;
    }
    Ground::exupdate(ground, src, des, id);
}
