#include "strategy103021.h"
#include "ground.h"
#include "item.h"
#include "buff/buff103021.h"
#include "log/logger.h"
#include <QSharedPointer>

Strategy103021::Strategy103021()
{
    id = 103021;
}

Strategy103021::~Strategy103021()
{

}

bool Strategy103021::run(Ground* ground, Item* item1)
{
    Logger::H().printstrategy(ground, item1, this);

    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff103021(item1->g[0], item1->g[0], id));
    Ground::addBuff(ground, ground->buff[0][item1->g[0]], buff);

    QVector<int> objs = selectObjrow(ground, item1->g[0]);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff103021(item1->g[0], obj, id));
        Ground::addBuff(ground, ground->buff[0][obj], buff);
    }

    return true;
}

QVector<int> Strategy103021::selectObjrow(Ground* ground, int pos)
{
    int g = pos / 10;
    int row1 = ground->m_group[g].m_item[pos%10].g[1];
    QVector<int> objs;
    for (int i = 0; i < 3; ++i)
    {
        if (ground->m_group[g].m_item[i].h[0] > 0 && row1 == ground->m_group[g].m_item[i].g[1] && i != pos % 10)
        {
            objs.append(g*10+i);
        }
    }
    int size = objs.size();
    for (int i = 0; i < size - 1; ++i)
    {
        objs.takeAt(qrand() % objs.size());
    }
    return objs;
}

