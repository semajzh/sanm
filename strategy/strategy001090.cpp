#include "strategy001090.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001090.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001090::Strategy001090()
{
    id = 1090;
}

Strategy001090::~Strategy001090()
{

}

bool Strategy001090::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    if (item1->g[1] == 0)
    {
        int obj = item1->g[0];
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001090(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

