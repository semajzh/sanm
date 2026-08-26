#include "method2223.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013320.h"
#include "buff/buff1091321.h"
#include "log/logger.h"

#ifdef CCZ
#include "buff/buff500002.h"
#include "buff/buff500006.h"
static bool check500002(Ground* ground, int obj1, int obj2);
static bool check500006(Ground* ground, int obj, int& n);
#endif

Method2223::Method2223()
{
    type = 2223;
    id = 2223;
}

Method2223::~Method2223()
{

}

int Method2223::run(Ground* ground, int obj1, int obj2, bool b113)
{
    if (check013(ground, obj1, b113))
    {
        Logger::H().printcustom(ground, 13, obj1);
        return 0;
    }
    if (check0013320(ground, obj1))
    {
        Logger::H().printcustom(ground, 13320, obj1);
        return 0;
    }
    if (check0090121(ground, obj1))
    {
        Logger::H().printcustom(ground, 90121, obj1);
        return 0;
    }

    check101012(ground, obj1);

    QVector<int> objs;
    if (check014(ground, obj1, obj2))
    {
        objs.append(obj2);
    }
    else if (obj2 >= 0)
    {
        objs.append(obj2);
    }
    if (objs.size() <= 0)
    {
        int n = 1;
#ifdef CCZ
        check500006(ground, obj1, n);
#endif
        objs = Ground::selectObjN(ground, obj1, 0x0040 + n, obj1);
    }
    if (objs.size() <= 0)
    {
        return 0;
    }
    ground->target2223 = objs.front();
    Logger::H().printmethod(ground, &ground->m_group[obj1/10].m_item[obj1%10], this, 1);

    for (int obj : objs)
    {
        check1091321(ground, obj);
#ifdef CCZ
        if (check500002(ground, obj1, obj))
        {
            continue;
        }
#endif
        Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj/10].m_item[obj%10], id, 100);
    }
    return 1;
}

bool Method2223::check013(Ground* ground, int obj, bool b113)
{
    bool b = false;
    if (b113)
    {
        return b;
    }
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 13)
        {
            b = true;
        }
    }
    return b;
}

bool Method2223::check014(Ground* ground, int obj1, int& obj2)
{
    int src = -1;
    bool b = false;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][obj1])
    {
        if (pbuff->id == 111)
        {
            return false;
        }
        if (pbuff->id == 14)
        {
            src = pbuff->src;
            b = true;
        }
    }
    if (b)
    {
        obj2 = src;
    }
    return b;
}

bool Method2223::check0013320(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[5][obj])
    {
        if (pbuff->id == 13320)
        {
            QSharedPointer<Buff0013320> buff = qSharedPointerCast<Buff0013320>(pbuff);
            return (buff->run(ground, ground->m_round) == 1);
        }
    }
    return false;
}

bool Method2223::check0090121(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[6][obj])
    {
        if (pbuff->id == 901211)
        {
            return true;
        }
    }
    return false;
}

bool Method2223::check1091321(Ground* ground, int& obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 10913212)
        {
            QSharedPointer<Buff10913212> buff = qSharedPointerCast<Buff10913212>(pbuff);
            buff->run(ground, obj);
            break;
        }
    }
    return true;
}

bool Method2223::check101012(Ground* ground, int obj)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 101012)
        {
            pbuff->run(ground);
            return true;
        }
    }
    return false;
}

#ifdef CCZ
bool check500002(Ground* ground, int obj1, int obj2)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj1])
    {
        if (pbuff->id == 500002)
        {
            QSharedPointer<Buff500002> buff = qSharedPointerCast<Buff500002>(pbuff);
            buff->run(ground, obj2);
            return true;
        }
    }
    return false;
}

bool check500006(Ground* ground, int obj, int& n)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][obj])
    {
        if (pbuff->id == 500006)
        {
            QSharedPointer<Buff500006> buff = qSharedPointerCast<Buff500006>(pbuff);
            buff->run(ground, n);
            return true;
        }
    }
    return false;
}
#endif
