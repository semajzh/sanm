#include "method2080121.h"
#include "ground.h"
#include "item.h"
#include "buff/buff2080121.h"
#include "log/logger.h"

Method2080121::Method2080121()
{
    type = 21;
    id = 2080121;
}

Method2080121::~Method2080121()
{

}

int Method2080121::run(Ground* ground, Item* item1)
{
    Logger::H().printmethod(ground, item1, this, true);

    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20801211(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    int g = item1->g[0] / 10;
    switch (ground->m_group[g].formation)
    {
    case 1: {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x3010);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20801212(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[4][obj], buff);
        }
    } break;

    case 3:
    case 4:
    case 8: {
        QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x6010);
        for (int obj : objs)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20801213(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[2][obj], buff);
        }
    } break;

    case 2:
    case 5:
    case 6:
    case 7: {
        int obj = -1;
        int g = item1->g[0] / 10;
        for (int i = 0; i < 3; ++i)
        {
            if (ground->m_group[g].m_item[i].g[1] == 0)
            {
                ground->m_group[g].m_item[i].g[2] = 84;
                ground->m_group[g].m_item[i].g[3] = 0;
                obj = g * 10 + i;
            }
            else
            {
                ground->m_group[g].m_item[i].g[2] = 8;
            }
        }
        if (obj >= 0)
        {
            QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff20801214(item1->g[0], obj, id));
            Ground::addBuff(ground, ground->buff[0][obj], buff);
        }
    } break;

    default:
        break;
    }

    return 1;
}
