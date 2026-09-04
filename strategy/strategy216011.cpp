#include "strategy216011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff216011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy216011::Strategy216011()
{
    id = 216011;
}

Strategy216011::~Strategy216011()
{

}

bool Strategy216011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff216011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
