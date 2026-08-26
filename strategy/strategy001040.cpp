#include "strategy001040.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001040.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001040::Strategy001040()
{
    id = 1040;
}

Strategy001040::~Strategy001040()
{

}

bool Strategy001040::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001040(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return true;
}

