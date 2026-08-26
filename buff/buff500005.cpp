#include "buff500005.h"
#include "buff011.h"
#include "ground.h"
#include "log/logger.h"

void Buff500005::run(Ground* ground, int obj)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff011(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff);

    QSharedPointer<Buff> buff2 = QSharedPointer<Buff>(new Buff5000052(des, obj, method, 1));
    Ground::addBuff(ground, ground->buff[1][obj], buff2);
}

void Buff5000052::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] += 30;
    Ground::exenter(ground, src, des, id);
}

void Buff5000052::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= 30;
    Ground::exexit(ground, src, des, id);
}

void Buff5000052::update(Ground* ground, QSharedPointer<Buff> buff)
{
    Logger::H().printbuffupdate(ground, src, des, this);
    BuffC::update(ground, buff);
    Ground::exupdate(ground, src, des, id);
}
