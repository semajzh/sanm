#include "buff181.h"
#include "ground.h"
#include "buff1030122.h"
#include "log/logger.h"

void Buff181::run(Ground* ground)
{
    if (round != ground->m_round && qrand() % 100 + 1 > 100 - 35)
    {
        round = ground->m_round;
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff1030122(des, des, id));
        Ground::addBuff(ground, ground->buff[3][des], buff);
    }
}
