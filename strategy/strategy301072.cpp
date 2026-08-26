#include "strategy301072.h"
#include "ground.h"
#include "item.h"
#include "buff/buff301072.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy301072::Strategy301072()
{
    id = 301072;
}

Strategy301072::~Strategy301072()
{

}

bool Strategy301072::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff301072(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[3][obj], buff);
    }

    return true;
}

