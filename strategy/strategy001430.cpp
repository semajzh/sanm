#include "strategy001430.h"
#include "ground.h"
#include "item.h"
#include "buff/buff001430.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy001430::Strategy001430()
{
    id = 1430;
}

Strategy001430::~Strategy001430()
{

}

bool Strategy001430::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    int g = item1->g[0] / 10;
    if (ground->m_group[g].m_item[0].g[4] == ground->m_group[g].m_item[1].g[4] ||
        ground->m_group[g].m_item[0].g[4] == ground->m_group[g].m_item[2].g[4] ||
        ground->m_group[g].m_item[1].g[4] == ground->m_group[g].m_item[2].g[4])
    {
        return true;
    }
    QVector<int> objs = Ground::selectObjN(ground, item1->g[0], 0x13);
    for (int obj : objs)
    {
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff001430(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}
