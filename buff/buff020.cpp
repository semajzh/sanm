#include "buff020.h"
#include "ground.h"
#include "log/logger.h"

void Buff020::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ++count;
}

void Buff020::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff020::update(Ground* ground, QSharedPointer<Buff> )
{
    Logger::H().printbuffupdate(ground, src, des, this);
    ++count;
}

int Buff020::run()
{
    if (count > 0)
    {
        --count;
    }
    return count;
}

bool Buff020::check020(Ground* ground, int src, int des, bool b20)
{
    if (b20)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff020(src, des, 20));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    }
    else
    {
        QVector<QSharedPointer<Buff>>& buffs = ground->buff[3][des];
        for (int i = 0; i < buffs.size(); ++i)
        {
            if (buffs.at(i)->id == 20)
            {
                QSharedPointer<Buff020> buff = qSharedPointerCast<Buff020>(buffs.at(i));
                if (buff->run() <= 0)
                {
                    buffs.remove(i);
                }
                break;
            }
        }
    }
    return true;
}
