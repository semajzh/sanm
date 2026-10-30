#include "buff2010924.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff2010924::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 24, src, method);
    float i = Ground::addbyix(ground, point1, ground->m_group[src/10].m_item[src%10].i[0]);
    i3 = Ground::addin(ground, des, 3, -i);
    i0 = Ground::addin(ground, des, 0, -i);
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff2010924::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 3, -i3, true);
    Ground::addin(ground, des, 0, -i0, true);
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff2010924::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
