#include "strategy401011.h"
#include "ground.h"
#include "item.h"
#include "buff/buff401011.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy401011::Strategy401011()
{
    id = 401011;
}

Strategy401011::~Strategy401011()
{

}

bool Strategy401011::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff401011(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[3][obj], buff);

    return true;
}
