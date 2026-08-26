#include "method2010721.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2010721.h"
#include "log/logger.h"
#include <QSharedPointer>

Method2010721::Method2010721()
{
    type = 21;
    id = 2010721;
}

Method2010721::~Method2010721()
{

}

int Method2010721::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20107211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[7][obj], buff);
    }

    int obj = item1->g[0];
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20107212(item1->g[0], obj, id));
    Ground::addBuff(ground, ground->buff[5][obj], buff);

    return 1;
}

