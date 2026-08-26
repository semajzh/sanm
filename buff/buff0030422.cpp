#include "buff0030422.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff00304221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);

    if (count++ < 2)
    {
        ground->m_group[des/10].m_item[des%10].i[1] += meta/1000.0f;
        Ground::addi2(ground, des, meta/1000.0f);
        data += meta/1000.0f;
    }
}

void Buff00304221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= data;
    Ground::addi2(ground, des, -data);
}

void Buff00304221::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    meta = buff->meta;
    if (count++ < 2)
    {
        ground->m_group[des/10].m_item[des%10].i[1] += meta/1000.0f;
        Ground::addi2(ground, des, meta/1000.0f);
        data += meta/1000.0f;
    }
}

void Buff00304222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    i1 = ground->m_group[des/10].m_item[des%10].i[1] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[1];
    i2 = ground->m_group[des/10].m_item[des%10].i[2] > meta/1000.0f ? meta/1000.0f : ground->m_group[des/10].m_item[des%10].i[2];
    i1 = Ground::addin(ground, des, 1, -i1);
    i2 = Ground::addin(ground, des, 2, -i2);
    ground->m_group[des/10].m_item[des%10].i[1] += i1;
    ground->m_group[des/10].m_item[des%10].i[2] += i2;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff00304222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].i[1] -= i1;
    ground->m_group[des/10].m_item[des%10].i[2] -= i2;
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff00304222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
