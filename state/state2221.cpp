#include "state2221.h"
#include "ground.h"
#include "item.h"
#include "buff/buff.h"
#include "log/logger.h"
#include <QSet>

State2221::State2221()
{

}

State2221::~State2221()
{

}

void State2221::run(Ground* ground, int current)
{
    buff1(ground, current);
}

void State2221::buff1(Ground* ground, int current)
{
    const auto buffs = ground->buff[1].value(current);
    for (int k = buffs.size() - 1; k >= 0; --k)
    {
        QSharedPointer<BuffC> buff = qSharedPointerCast<BuffC>(buffs.at(k));
        int index = ground->buff[1].value(current).indexOf(buff);
        if (index >= 0 && buff->m_round == 0)
        {
            ground->buff[1][current].takeAt(index)->exit(ground);
        }
    }

    buff2(ground, current);

#if 0
    for (QSharedPointer<Buff> buff : ground->buff[1][current])
    {
        qSharedPointerCast<BuffC>(buff)->m_round -= 1;
        buff->run(ground);
    }
#else
    Ground::checkbuff(ground, 1, current, [](Ground* ground, QSharedPointer<Buff> buff) {
        qSharedPointerCast<BuffC>(buff)->m_round -= 1;
        buff->run(ground);
    });
#endif
}

void State2221::buff2(Ground* ground, int current)
{
#if 0
    for (QSharedPointer<Buff> buff : ground->buff[2][current])
    {
        buff->run(ground);
    }
#else
    Ground::checkbuff(ground, 2, current, [](Ground* ground, QSharedPointer<Buff> buff) {
        buff->run(ground);
    });
#endif
}
