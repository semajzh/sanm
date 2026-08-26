#include "buff404012.h"
#include "ground.h"
#include "log/logger.h"

void Buff4040122::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    k0 += 2;
    ground->m_group[des/10].m_item[des%10].k[0] += 2;
}

void Buff4040122::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].k[0] -= k0;
}

void Buff4040122::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    k0 += 2;
    ground->m_group[des/10].m_item[des%10].k[0] += 2;
}
