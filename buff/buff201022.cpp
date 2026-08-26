#include "buff201022.h"
#include "buff004.h"
#include "ground.h"
#include "log/logger.h"

void Buff201022::run(Ground* ground, int obj)
{
    if (qrand() % 100 + 1 <= 100 - 50)
    {
        return;
    }

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff004(des, obj, 201022, 2));
    Ground::addBuff(ground, ground->buff[1][obj], buff);
}

void Buff201022::run(Ground* ground, int obj, float& k0)
{
    k0 = check004(ground, obj) ? 6 : 0;
}

bool Buff201022::check004(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 4)
        {
            return true;
        }
    }
    return false;
}
