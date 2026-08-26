#include "state1.h"
#include "ground.h"
#include <QFile>

State1::State1()
{

}

State1::~State1()
{

}

void State1::run(Ground** ground)
{
    int team[2] = {0};
    memcpy(team, (*ground)->team, sizeof(int)*2);

    int vs = (*ground)->vs;
    int h[6][8];
    if (vs > 0)
    {
        memset(h, 0, sizeof(int)*30);
        for (int i = 0; i < 6; ++i)
        {
            memcpy(h[i], (*ground)->m_group[i/3].m_item[i%3].h, sizeof(int)*8);
        }
    }

    delete (*ground);

    *ground = new Ground;
    memcpy((*ground)->team, team, sizeof(int)*2);
    Group::getGroupF((*ground)->team[0], (*ground)->m_group[0]);
    Group::getGroupF((*ground)->team[1], (*ground)->m_group[1]);
    for (int i = 0; i < 6; ++i)
    {
        (*ground)->m_group[i/3].m_item[i%3].g[0] = i/3*10 + i%3;
    }
    if (vs > 0)
    {
        for (int i = 0; i < 6; ++i)
        {
            memcpy((*ground)->m_group[i/3].m_item[i%3].h, h[i], sizeof(int)*8);
        }
        (*ground)->vs = vs;
    }
}
