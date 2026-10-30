#include "buff001610.h"
#include "ground.h"
#include "log/logger.h"

void Buff001610::run(Ground* ground)
{
    if (qrand() % 100 + 1 > 100 - 60)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001611(src, des, 1610));
        Ground::addBuff(ground, ground->buff[0][des], buff);
    }
}

void Buff001611::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    if (++count <= 4)
    {
	    i0 += 5;
        Ground::addin(ground, des, 0, 5);
    }
}

void Buff001611::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::addin(ground, des, 0, -i0, true);
}

void Buff001611::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    if (++count <= 4)
    {
        i0 += 5;
        Ground::addin(ground, des, 0, 5);
    }
}



