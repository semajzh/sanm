#include "buff401151.h"
#include "buff112.h"
#include "ground.h"
#include "log/logger.h"

void Buff401151::run(Ground* ground)
{
    if (qrand() % 100 + 1 <= 100 - 16)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff112(src, des, method, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}
