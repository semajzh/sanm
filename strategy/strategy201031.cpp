#include "strategy201031.h"
#include "ground.h"
#include "item.h"
#include "buff/buff201031.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy201031::Strategy201031()
{
    id = 201031;
}

Strategy201031::~Strategy201031()
{

}

bool Strategy201031::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff201031(item1->g[0], obj, id));
    addBuff(ground, ground->buff[7][obj], buff);

    return true;
}

void Strategy201031::addBuff(Ground* , QVector<QSharedPointer<Buff>>& buffs, QSharedPointer<Buff> &buff)
{
    int pos = -1;
    for (int i = 0; i < buffs.size(); ++i)
    {
        if (buffs[i]->id == buff->id)
        {
            pos = i;
            break;
        }
    }
    if (pos < 0)
    {
        buffs.append(buff);
    }
}
