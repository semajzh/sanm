#include "buff4040121.h"
#include "buff404012.h"
#include "ground.h"
#include "log/logger.h"

bool Buff4040121::check(Ground* ground, int obj, int method)
{
    float point1 = Ground::pointbystar(ground, 50, src, method);
    if (count > 0 && src != obj && (qrand() % 100 + 1 > 100 - (ground->m_group[src/10].m_item[src%10].i[1]/10.0f + point1)))
    {
        --count;
        Logger::H().printcustom(ground, 4040121, des, 4040121, method);
        check404012(ground);
        return true;
    }
    return false;
}

bool Buff4040121::run(Ground* ground, int current, float& point)
{
    float point1 = Ground::pointbystar(ground, 20, src, method);
    if (src == current)
    {
        point *= 1.0f - (point1 + count + ground->m_group[src/10].m_item[src%10].i[1]/36) / 100;
    }
    return true;
}

bool Buff4040121::check404012(Ground* ground)
{
    for (QSharedPointer<Buff> pbuff : ground->buff[3][des])
    {
        if (pbuff->id == 404012)
        {
            QVector<int> objs = Ground::selectObjN(ground, des, 0x13, des);
            for (int obj : objs)
            {
                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff4040122(des, obj, 404012));
                Ground::addBuff(ground, ground->buff[0][obj], buff);
            }
            return true;
        }
    }
    return false;
}
