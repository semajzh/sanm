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
    }
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff0020324::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
    Ground::addin(ground, des, 1, -i1, true);
    Ground::addin(ground, des, 2, -i2, true);
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
    }
    Ground::exupdate(ground, src, des, id);
}
