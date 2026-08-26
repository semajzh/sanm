#include "buff401022.h"
#include "ground.h"
#include "log/logger.h"

void Buff401022::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    l1 = Ground::addln(ground, des, 1, -5);
    ground->m_group[des/10].m_item[des%10].l[1] += l1;
    ground->m_group[des/10].m_item[des%10].j[8] += 20;
}

void Buff401022::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
    ground->m_group[des/10].m_item[des%10].j[8] -= 20;
}
