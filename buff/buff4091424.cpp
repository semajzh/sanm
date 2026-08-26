#include "buff4091424.h"
#include "ground.h"
#include "log/logger.h"

void Buff40914241::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        i0 += meta/1000.0f;
        i1 += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].i[0] += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].i[1] += meta/1000.0f;
    }
}

void Buff40914241::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] -= i0;
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
}

void Buff40914241::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (++count <= 2)
    {
        i0 += meta/1000.0f;
        i1 += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].i[0] += meta/1000.0f;
        ground->m_group[des/10].m_item[des%10].i[1] += meta/1000.0f;
    }
}

void Buff40914242::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 2)
    {
        i0 = ground->m_group[des/10].m_item[des%10].i[0] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[0];
        i1 = ground->m_group[des/10].m_item[des%10].i[1] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[1];
        ground->m_group[des/10].m_item[des%10].i[0] -= i0;
        ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    }
    Ground::exenter(ground, src, des, id);
}

void Buff40914242::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[0] += i0;
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
    Ground::exexit(ground, src, des, id);
}

void Buff40914242::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (++count <= 2)
    {
        i0 = ground->m_group[des/10].m_item[des%10].i[0] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[0];
        i1 = ground->m_group[des/10].m_item[des%10].i[1] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[1];
        ground->m_group[des/10].m_item[des%10].i[0] -= i0;
        ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    }
    Ground::exupdate(ground, src, des, id);
}
