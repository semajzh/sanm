#include "method3332.h"
#include "ground.h"
#include "item.h"
#include "buff/buff0013320.h"
#include "buff/buff1091321.h"
#include "log/logger.h"

#ifdef CCZ
#include "buff/buff500002.h"
static bool check500002(Ground* ground, int obj1, int obj2);
#endif

Method3332::Method3332()
{
    type = 3332;
    id = 3332;
}

Method3332::~Method3332()
{

}

int Method3332::run(Ground* ground, int obj1, int obj2, bool b113)
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

    int obj = obj2;
    check1091321(ground, obj);
    Logger::H().printcustom(ground, 3332, obj1);
#ifdef CCZ
    if (check500002(ground, obj1, obj))
    {
        return 1;
    }
#endif
    Ground::actbr(ground, &ground->m_group[obj1/10].m_item[obj1%10], &ground->m_group[obj/10].m_item[obj%10], id, 100);
    return 1;
}

bool Method3332::check013(Ground* ground, int obj, bool b113)
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

bool Method3332::check0013320(Ground* ground, int obj)
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

bool Method3332::check0090121(Ground* ground, int obj)
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

bool Method3332::check1091321(Ground* ground, int& obj)
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

bool Method3332::check101012(Ground* ground, int obj)
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
#endif
