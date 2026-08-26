#include "buff013.h"
#include "buff101131.h"
#include "ground.h"
#include "log/logger.h"

Buff013::Buff013(int s, int d, int m, int r) : BuffC(s, d, m, r)
{
    id = 13;
    unsigned char ch[] = {0xe7, 0xbc, 0xb4, 0xe6, 0xa2, 0xb0};
    Logger::H().printname(ch, sizeof(ch), id);
}

void Buff013::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    Ground::exenter(ground, src, des, id);
    check101131(ground, src, des);
}

void Buff013::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    Ground::exexit(ground, src, des, id);
}

void Buff013::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
    check101131(ground, src, des);
}

bool Buff013::check101131(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 101131)
        {
            QSharedPointer<Buff101131> buff = qSharedPointerCast<Buff101131>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}
