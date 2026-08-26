#include "buffs602.h"
#include "ground.h"
#include "log/logger.h"

void BuffS602::enter(Ground* ground)
{
    Logger::H().printbuffenter(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] += 12;
}

void BuffS602::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
    ground->m_group[des/10].m_item[des%10].j[1] -= 12;
}

void BuffS602::run(Ground* )
{

}

float BuffS602::check(Ground* ground)
{
    if (ground->m_round > 3)
    {
        return 0.0f;
    }
    if (round != ground->m_round)
    {
        round = ground->m_round;
        enable = true;
    }
    if (enable)
    {
        enable = false;
        return 50.0f;
    }
    return 0.0f;
}
