#include "buff401042.h"
#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff401042::run(Ground* ground, int obj)
{
    if (!ground->exceptions[obj].contains(5))
    {
        return;
    }
    float point = Ground::addbyix(ground, 10, ground->m_group[src/10].m_item[src%10].i[1]);
    Ground::addin(ground, des, 1, point);
    i1 += point;
    QSharedPointer<Buff> buff(new Buff4010421(src, obj, method, point*1000));
    Ground::addBuff(ground, ground->buff[0][obj], buff);
}

void Buff401042::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, src, 1, -i1, true);
}

void Buff4010421::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    float point = Ground::addin(ground, des, 1, -meta/1000.0f);
    i1 += point;
    Buff020::check020(ground, src, des, true);
    Ground::exenter(ground, src, des, id);
}

void Buff4010421::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 1, -i1, true);
    Buff020::check020(ground, src, des, false);
    Ground::exexit(ground, src, des, id);
}

void Buff4010421::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    float point = Ground::addin(ground, des, 1, -buff->meta/1000.0f);
    i1 += point;
    Ground::exupdate(ground, src, des, id);
}
