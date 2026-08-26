#include "buff102.h"
#include "buff1140121.h"
#include "buff0140121.h"
#include "ground.h"
#include "log/logger.h"

void Buff102::enter(Ground* ground)
{
    Logger::H().printcustom(ground, 102, des, meta, 0, 0);
    check1140121(ground, 1);
}

void Buff102::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff102::run(Ground* )
{

}

void Buff102::update(Ground* ground, QSharedPointer<Buff> buff)
{
    meta += buff->meta;
    if (meta > 2)
    {
        meta = 2;
    }
    Logger::H().printcustom(ground, 102, des, meta, 0, 0);
    check1140121(ground, 1);
}

int Buff102::run(Ground* ground, float& point)
{
    if (meta > 0)
    {
        int r = qrand() % 21 + 70; //[70, 90]
        point *= 1.0f - r / 100.0f;
        --meta;
        Logger::H().printcustom(ground, 102, des, meta, 0, 0);
        check1140121(ground, -1);
        check0140121(ground, des);
    }
    return meta;
}

bool Buff102::check1140121(Ground* ground, int t)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[2][des])
    {
        if (pbuff->id == 1140121)
        {
            QSharedPointer<Buff1140121> buff = qSharedPointerCast<Buff1140121>(pbuff);
            buff->run(ground, t);
            return true;
        }
    }
    return false;
}

bool Buff102::check0140121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1401212)
        {
            QSharedPointer<Buff01401212> buff = qSharedPointerCast<Buff01401212>(pbuff);
            buff->run(ground);
            return true;
        }
    }
    return false;
}
