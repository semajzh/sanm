#include "buff403012.h"
#include "ground.h"
#include "log/logger.h"

void Buff4030122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 8)
    {
        float i = ground->m_group[des/10].m_item[des%10].i[3] * 0.02f;
        i0 += i;
        i1 += i;
        Ground::addin(ground, des, 0, i);
        Ground::addin(ground, des, 1, i);
    }
}

void Buff4030122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
    Ground::addin(ground, des, 1, -i1, true);
}

void Buff4030122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 8)
    {
        float i = ground->m_group[des/10].m_item[des%10].i[3] * 0.02f;
        i0 += i;
        i1 += i;
        Ground::addin(ground, des, 0, i);
        Ground::addin(ground, des, 1, i);
    }
}
