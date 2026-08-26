#include "method4110220.h"
#include "ground.h"
#include "item.h"
#include "buff/buff4110220.h"
#include "buff/buff411021.h"
#include "log/logger.h"

Method4110220::Method4110220()
{
    type = 20;
    id = 4110220;
}

Method4110220::~Method4110220()
{

}

int Method4110220::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41102201(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff41102203(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[2][obj], buff2);

    if (check411021(ground, item1->g[0]))
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41102202(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[5][obj], buff);
    }
    else
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff41102202(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[2][obj], buff);
    }

    return 1;
}

bool Method4110220::check411021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 411021)
        {
            return true;
        }
    }
    return false;
}
