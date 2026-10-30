#include "buff4020122.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff40201221::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float point2 = point1 + Ground::getMaxi(ground, src) / 10;
    ix[0] += point2;
    ix[1] += point2;
    ix[3] += point2;
    Ground::addin(ground, des, 0, point2);
    Ground::addin(ground, des, 1, point2);
    Ground::addin(ground, des, 3, point2);
}

void Buff40201221::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -ix[0], true);
    Ground::addin(ground, des, 1, -ix[1], true);
    Ground::addin(ground, des, 3, -ix[3], true);
}

void Buff40201222::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point1 = Ground::pointbystar(ground, 40, src, method);
    float point2 = Ground::addbyix(ground, point1, Ground::getMaxi(ground, src));
    ix[0] = Ground::addin(ground, des, 0, -point2);
    Buff020::check020(ground, src, des, true);
    check4110121(ground);
    ix[1] = Ground::addin(ground, des, 1, -point2);
    check4110121(ground);
    ix[3] = Ground::addin(ground, des, 3, -point2);
    check4110121(ground);
    Ground::exenter(ground, src, des, id);
}

void Buff40201222::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -ix[0], true);
    Ground::addin(ground, des, 1, -ix[1], true);
    Ground::addin(ground, des, 3, -ix[3], true);
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff40201222::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}

bool Buff40201222::check4110121(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 41101212)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

