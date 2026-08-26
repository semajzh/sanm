#include "buff106.h"
#include "ground.h"
#include "log/logger.h"

void Buff106::enter(Ground* ground)
{
    Logger::H().printcustom(ground, 106, des, meta, 0, 0);
}

void Buff106::exit(Ground* ground)
{
    Logger::H().printbuffexit(ground, src, des, this);
}

void Buff106::update(Ground* ground, QSharedPointer<Buff> buff)
{
    meta += buff->meta;
    Logger::H().printcustom(ground, 106, des, meta, 0, 0);
}

int Buff106::run(Ground* ground, int obj, float& point)
{
    if (meta > 0)
    {
        float point1 = point * 50 / 100;
        if (point1 > meta)
        {
            point1 = meta;
        }
        point -= point1;
        meta -= point1;
        Logger::H().printcustom(ground, 106, des, meta, 0, 0);

        Ground::acttb(ground, &ground->m_group[des/10].m_item[des%10], &ground->m_group[obj/10].m_item[obj%10], method, 0, point1);
    }
    return meta;
}
