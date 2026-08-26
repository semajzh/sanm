#include "strategy208011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff208011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy208011::Strategy208011()
{
    id = 208011;
}

Strategy208011::~Strategy208011()
{

}

bool Strategy208011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff208011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[7][obj], buff);

    return true;
}
