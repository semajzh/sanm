#include "buff202022.h"
#include "buff2020222.h"
#include "ground.h"
#include "log/logger.h"

void Buff202022::run(Ground* ground, int obj)
{
    if (round == ground->m_round)
    {
        return;
    }
    float jl = Ground::addbyix(ground, 30, ground->m_group[src/10].m_item[src%10].i[1]);
    if (qrand() % 100 + 1 <= 100 - jl)
    {
        return;
    }
    if (obj < 0 || ground->m_group[obj/10].m_item[obj%10].h[0] <= 0)
    {
        return;
    }

    round = ground->m_round;
    QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff2020222(des, obj, 2020222));
    Ground::addBuff(ground, ground->buff[3][obj], buff);
}
