#include "state2222.h"
#include "ground.h"
#include "item.h"
#include "method/method.h"
#include "buff/buff012.h"
#include "buff/buff101.h"
#include "buff/buff0013320.h"
#include "buff/buff1010221.h"
#include "buff/buff4040121.h"
#include "buff/buff4070221.h"
#include "buff/buff4091221.h"
#include "buff/buff4091321.h"
#include "buff/buff0104021.h"
#include "buff/buff4130122.h"
#include <cmath>
#include <QSharedPointer>
#include "log/logger.h"

State2222::State2222()
{

}

State2222::~State2222()
{

}

void State2222::run(Ground* ground, int obj)
{
    Item& item = ground->m_group[obj/10].m_item[obj%10];
    for (int k = 0; k < 4; ++k)
    {
        int m = item.methods[k];
        if (item.h[0] <= 0 || m % 100 != 22 || check011(ground, obj) || check012(ground, obj) || check0013320(ground, obj))
        {
            continue;
        }

        QSharedPointer<Method> method = Method::getMethod(m);
        if (method.isNull() || method->id == 0)
        {
            continue;
        }

        float jl = item.j[4] + (k == 0 ? item.j[5] : 0);
        for (int n = 0; n < 2; ++n)
        {
            float luck = 0;
            if (n == 1)
            {
                luck = 999;
                Logger::H().printcustom(ground, m, item.g[0]); //twice
            }

            int r = methodrun(ground, &item, method, jl + luck);
            if (r == 0 && check4040121(ground, obj, method->id))
            {
                r = methodrun(ground, &item, method, jl + luck);
            }
            if (r == 1)
            {
                check001290(ground, item.g[0]);
                check301011(ground, item.g[0]);
                check301071(ground, item.g[0]);
                check301072(ground, item.g[0]);
                check301111(ground, item.g[0]);
                check301112(ground, item.g[0]);
                check401041(ground, item.g[0]);

                check2040120(ground, item.g[0]);
                check4070221(ground, item.g[0], 1);
                if (method->zb && check407022(ground, item.g[0]))
                {
                    check4070221(ground, item.g[0], 0);
                }
                check4091221(ground, item.g[0], m);
                check0102021(ground, item.g[0], k);
                check3120121(ground, item.g[0]);

                if (check1010221(ground, item.g[0], m) || check4091321(ground, item.g[0], m) || check4130122(ground, item.g[0], m))
                {
                    continue;
                }
            }
            break;
        }
    }
}

int State2222::methodrun(Ground* ground, Item* item, QSharedPointer<Method> method, float luck)
{
    check4091221(ground, item->g[0]);
    check0104021(ground, item->g[0]);
    check4130220(ground, item->g[0]);
    check0150120(ground, item->g[0]);

    int r = 0;
    luck += method->getLuck(ground, item);
    if (qrand() % 100 + 1 <= 100 - luck)
    {
        Logger::H().printmethod(ground, item, method.get(), false);
    }
    else
    {
        r = method->run(ground, item);
    }
    return r;
}

bool State2222::check011(Ground* ground, int obj)
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

bool State2222::check012(Ground* ground, int obj)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 112)
        {
            return false;
        }
        if (pbuff->id == 12)
        {
            b = true;
        }
    }
    return b;
}

bool State2222::check001290(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 1290)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check301011(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301011)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check301071(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301071)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check301072(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301072)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check301111(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301111)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check301112(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 301112)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check401041(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 401041)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check407022(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 407022)
        {
            return true;
        }
    }
    return false;
}

bool State2222::check1010221(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10102212)
        {
            QSharedPointer<Buff10102212> buff = qSharedPointerCast<Buff10102212>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

bool State2222::check0013320(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj])
    {
        if (pbuff->id == 13320)
        {
            QSharedPointer<Buff0013320> buff = qSharedPointerCast<Buff0013320>(pbuff);
            return (buff->run(ground, ground->m_round) == 0);
        }
    }
    return false;
}

bool State2222::check2040120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 2040120)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check4040121(Ground* ground, int obj, int method)
{
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4040121)
        {
            QSharedPointer<Buff4040121> buff = qSharedPointerCast<Buff4040121>(pbuff);
            b = buff->check(ground, obj, method);
            break;
        }
    }
    return b;
}

bool State2222::check4070221(Ground* ground, int obj, int n)
{
    int g = obj / 10;
    for (int i = 0; i < 3; ++i)
    {
        int pos = g * 10 + i;
        for (QSharedPointer<Buff> pbuff : ground->buff[3][pos])
        {
            if (pbuff->id == 4070221)
            {
                QSharedPointer<Buff4070221> buff = qSharedPointerCast<Buff4070221>(pbuff);
                buff->run(ground, n);
                return true;
            }
        }
    }
    return false;
}

bool State2222::check4091221(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 40912212)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool State2222::check4091221(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 40912212)
        {
            QSharedPointer<Buff40912212> buff = qSharedPointerCast<Buff40912212>(pbuff);
            buff->run(ground, method);
            break;
        }
    }
    return true;
}

bool State2222::check4091321(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 4091321)
        {
            QSharedPointer<Buff4091321> buff = qSharedPointerCast<Buff4091321>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

bool State2222::check0102021(Ground* ground, int obj, int k)
{
    if (k != 0)
    {
        return false;
    }
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 102021)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

bool State2222::check0104021(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 104021)
        {
            QSharedPointer<Buff0104021> buff = qSharedPointerCast<Buff0104021>(pbuff);
            buff->run(ground, 0);
            return true;
        }
    }
    return false;
}

bool State2222::check3120121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 31201211)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool State2222::check4130122(Ground* ground, int obj, int method)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 41301222)
        {
            QSharedPointer<Buff41301222> buff = qSharedPointerCast<Buff41301222>(pbuff);
            return buff->run(ground, method);
        }
    }
    return false;
}

bool State2222::check4130220(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 4130220)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}

bool State2222::check0150120(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 150120)
        {
            pbuff->run(ground);
            break;
        }
    }
    return true;
}
