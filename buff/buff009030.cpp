#include "buff009030.h"
#include "ground.h"
#include "buff102.h"
#include "log/logger.h"

float Buff009030::run(Ground* ground, int )
{
    if ((round == ground->m_round && count >= 3) || qrand() % 100 + 1 <= 100 - 65)
    {
        return 0.0f;
    }

    if (round != ground->m_round)
    {
        round = ground->m_round;
        count = 0;
    }
    ++count;

    QVector<int> objs = Ground::selectObjN(ground, des, 0x11);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff102(src, obj, 9030, 1));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }
    return 15.0f;
}
