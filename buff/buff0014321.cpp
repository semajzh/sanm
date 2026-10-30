#include "buff0014321.h"
#include "buff015.h"
#include "ground.h"
#include "log/logger.h"

void Buff00143211::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
}

void Buff00143211::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60 || ++count > 8)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 7, src, method);
    i0 += point1;
    Ground::addin(ground, des, 0, point1);
}

void Buff00143212::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -i1, true);
}

void Buff00143212::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60 || ++count > 8)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 7, src, method);
    i1 += point1;
    Ground::addin(ground, des, 1, point1);
}

void Buff00143213::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 2, -i2, true);
}

void Buff00143213::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 60 || ++count > 8)
    {
        return;
    }
    float point1 = Ground::pointbystar(ground, 7, src, method);
    i2 += point1;
    Ground::addin(ground, des, 2, point1);
}
