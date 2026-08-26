#include "state3.h"
#include "ground.h"
#include "log/logger.h"

State3::State3()
{

}

State3::~State3()
{

}

void State3::run(Ground* ground)
{
    for (int g = 0; g < 2; ++g)
    {
        for (int i = 0; i < 3; ++i)
        {
            int h1 = ground->m_group[g].m_item[i].h[1] * 0.25f;
            ground->m_group[g].m_item[i].h[2] += h1;
            ground->m_group[g].m_item[i].h[1] -= h1;
            for (int r = ground->m_round; r <= 8; ++r)
            {
                ground->data[g*10+i].h0[r] = ground->m_group[g].m_item[i].h[0];
            }
        }
    }
    Logger::H().printresult(ground);
}
