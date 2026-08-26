#include "state2225.h"
#include "ground.h"
#include "buff/buff.h"


State2225::State2225()
{

}

State2225::~State2225()
{

}

void State2225::run(Ground* ground, int current)
{
    buff8(ground, current);
    buff9(ground, current);
}

void State2225::buff8(Ground* ground, int current)
{
#if 0
    int g = current / 10;
    int i = current % 10;
    Item& item1 = ground->m_group[g].m_item[i];
    if (item1.h[0] <= 0)
    {
        return;
    }
    for (QSharedPointer<Buff> buff : ground->buff[8][current])
    {
        buff->run(ground);
    }
#else
    if (ground->m_group[current/10].m_item[current%10].h[0] <= 0)
    {
        return;
    }
    Ground::checkbuff(ground, 8, current, [](Ground* ground, QSharedPointer<Buff> buff) {
        buff->run(ground);
    });
#endif
}


void State2225::buff9(Ground* ground, int current)
{
#if 0
    int g = current / 10;
    int i = current % 10;
    Item& item1 = ground->m_group[g].m_item[i];
    if (item1.h[0] <= 0)
    {
        return;
    }
    for (QSharedPointer<Buff> buff : ground->buff[9][current])
    {
        buff->run(ground);
    }
#else
    if (ground->m_group[current/10].m_item[current%10].h[0] <= 0)
    {
        return;
    }
    Ground::checkbuff(ground, 9, current, [](Ground* ground, QSharedPointer<Buff> buff) {
        buff->run(ground);
    });
#endif
}
