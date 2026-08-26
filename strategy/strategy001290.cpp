#include "strategy001290.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001290.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001290::Strategy001290()
{
    id = 1290;
}

Strategy001290::~Strategy001290()
{

}

bool Strategy001290::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001290(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
