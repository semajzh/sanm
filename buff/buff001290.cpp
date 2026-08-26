#include "buff001290.h"
#include "ground.h"
#include "log/logger.h"

void Buff001290::run(Ground* ground)
{
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff0012902(des, des, id, 2));
    Ground::addBuff(ground, ground->buff[1][des], buff);
}

void Buff0012902::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l0 = Ground::addln(ground, des, 0, -5.5);
    ground->m_group[des/10].m_item[des%10].l[0] += l0;
}

void Buff0012902::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[0] -= l0;
}
