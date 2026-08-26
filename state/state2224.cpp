#include "state2224.h"
#include "ground.h"
#include "item.h"
#include "method/method.h"
#include "buff/buff.h"
#include <QSharedPointer>

State2224::State2224()
{

}

State2224::~State2224()
{

}

void State2224::run(Ground* ground, int obj)
{
    Item& item1 = ground->m_group[obj/10].m_item[obj%10];
    for (int m : item1.methods)
    {
        if (item1.h[0] <= 0 || m % 100 != 24 || check011(ground, obj))
        {
            continue;
        }

        Ground::run2224(ground, &item1, m);
    }
}

bool State2224::check011(Ground* ground, int obj)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 11)
        {
            b = true;
        }
    }
    return b;
}
