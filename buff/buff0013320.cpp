#include "buff0013320.h"
#include "buff012.h"
#include "buff013.h"
#include "ground.h"
#include "log/logger.h"

void Buff0013320::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].l[1] -= l1;
    ground->m_group[des/10].m_item[des%10].l[2] -= l2;
    ground->m_group[des/10].m_item[des%10].l[3] -= l3;
    ground->m_group[des/10].m_item[des%10].l[4] -= l4;
    ground->m_group[des/10].m_item[des%10].l[5] -= l5;
}

void Buff0013320::run(Ground* ground)
{
    float point1 = Ground::pointbystar(ground, 35, src, method);
    if (ground->m_round % 2 == 1)
    {
        ground->m_group[des/10].m_item[des%10].l[2] -= l2;
        ground->m_group[des/10].m_item[des%10].l[4] -= l4;
        l2 = 0;
        l4 = 0;

        l1 = Ground::addln(ground, des, 1, -point1);
        l3 = Ground::addln(ground, des, 3, -point1);
        l5 = Ground::addln(ground, des, 5, -point1);
        ground->m_group[des/10].m_item[des%10].l[1] += l1;
        ground->m_group[des/10].m_item[des%10].l[3] += l3;
        ground->m_group[des/10].m_item[des%10].l[5] += l5;
    }
    else
    {
        ground->m_group[des/10].m_item[des%10].l[1] -= l1;
        ground->m_group[des/10].m_item[des%10].l[3] -= l3;
        ground->m_group[des/10].m_item[des%10].l[5] -= l5;
        l1 = 0;
        l3 = 0;
        l5 = 0;

        l2 = Ground::addln(ground, des, 2, -point1);
        l4 = Ground::addln(ground, des, 4, -point1);
        ground->m_group[des/10].m_item[des%10].l[2] += l2;
        ground->m_group[des/10].m_item[des%10].l[4] += l4;
    }
}

int Buff0013320::run(Ground* , int round)
{
    return (round % 2);
}
