#include "buff302011.h"
#include "ground.h"
#include "buff015.h"
#include "log/logger.h"

void Buff302011::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
}

void Buff302011::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff302011::run(Ground* )
{
}

void Buff302011::run(Ground* ground, int obj)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(des, obj, 302011, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}
