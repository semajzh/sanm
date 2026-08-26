#include "state2223.h"
#include "ground.h"
#include "method/method.h"
#include <QSharedPointer>

#ifdef CCZ
#include "buff/buff5000120.h"
#include "buff/buff5000220.h"
#include "buff/buff5000320.h"
static bool check5000120(Ground* ground, int obj);
static bool check5000220(Ground* ground, int obj);
static bool check5000320(Ground* ground, int obj);
#endif

State2223::State2223()
{

}

State2223::~State2223()
{

}

bool State2223::run(Ground* ground, int current)
{
    bool ret = true;
    int g = current / 10;
    int i = current % 10;
    Item& item1 = ground->m_group[g].m_item[i];
    for (int k = 0; k < 4; ++k)
    {
        if (item1.h[0] > 0 && item1.methods[k] == 2223)
        {
#ifdef CCZ
            if (check5000120(ground, current) || check5000220(ground, current) || check5000320(ground, current))
            {
                ret = false;
                break;
            }
#endif
            if (!Ground::run2223(ground, item1.g[0], -1, false, false))
            {
                ret = false;
                break;
            }
        }
    }
    return ret;
}

#ifdef CCZ
bool check5000120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000120)
        {
            QSharedPointer<Buff5000120> buff = qSharedPointerCast<Buff5000120>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return false;
}

bool check5000220(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000220)
        {
            QSharedPointer<Buff5000220> buff = qSharedPointerCast<Buff5000220>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return false;
}

bool check5000320(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 5000320)
        {
            QSharedPointer<Buff5000320> buff = qSharedPointerCast<Buff5000320>(pbuff);
            return buff->run(ground, 0);
        }
    }
    return false;
}
#endif
