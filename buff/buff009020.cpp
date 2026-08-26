#include "buff009020.h"
#include "ground.h"
#include "buff015.h"
#include "log/logger.h"

bool Buff009020::run(Ground* ground, int )
{
    if (round == ground->m_round || qrand() % 100 + 1 <= 100 - 50)
    {
        return false;
    }

    round = ground->m_round;
    int n = qrand() % 2 + 1;
    QVector<int> objs = Ground::selectObjN(ground, des, 0x20 + n);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff015(src, obj, 9020, 1));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
    return true;
}
