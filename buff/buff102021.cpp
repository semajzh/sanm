#include "buff102021.h"
#include "buff017.h"
#include "ground.h"
#include "log/logger.h"

void Buff102021::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l2 = Ground::addln(ground, des, 2, -7);
    ground->m_group[des/10].m_item[des%10].l[2] += l2;
}

void Buff102021::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
}

void Buff102021::run(Ground* ground)
{
    if (ground->m_round != 3)
    {
        return;
    }

    QVector<int> objs = Ground::selectObjN(ground, des, 0x21);
    if (objs.size() > 0)
    {
        int obj = objs.front();
        QSharedPointer<Buff> buff = QSharedPointer<Buff017>(new Buff017(des, obj, 102021, 2));
        Ground::addBuff(ground, ground->buff[1][obj], buff);
    }

}
