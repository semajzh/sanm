#include "buff0020324.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff0020324::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    if (++count <= 5)
    {
        float ii0 = Ground::addin(ground, des, 0, -point1);
        float ii1 = Ground::addin(ground, des, 1, -point1);
        float ii2 = Ground::addin(ground, des, 2, -point1);
        i0 += ii0;
        i1 += ii1;
        i2 += ii2;
        ground->m_group[des/10].m_item[des%10].i[0] += ii0;
        ground->m_group[des/10].m_item[des%10].i[1] += ii1;
        ground->m_group[des/10].m_item[des%10].i[2] += ii2;
    }
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff0020324::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff0020324::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    float point1 = Ground::pointbystar(ground, 30, src, method);
    if (++count <= 5)
    {
        float ii0 = Ground::addin(ground, des, 0, -point1);
        float ii1 = Ground::addin(ground, des, 1, -point1);
        float ii2 = Ground::addin(ground, des, 2, -point1);
        i0 += ii0;
        i1 += ii1;
        i2 += ii2;
        ground->m_group[des/10].m_item[des%10].i[0] += ii0;
        ground->m_group[des/10].m_item[des%10].i[1] += ii1;
        ground->m_group[des/10].m_item[des%10].i[2] += ii2;
    }
    Ground::exupdate(ground, src, des, id);
}
