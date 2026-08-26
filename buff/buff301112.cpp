#include "buff301112.h"
#include "buff002.h"
#include "ground.h"
#include "log/logger.h"

void Buff301112::run(Ground* ground)
{
    float jl = Ground::addbyix(ground, 40, ground->m_group[des/10].m_item[des%10].i[0]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff002(des, obj, method, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }
}
