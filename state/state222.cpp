#include "state222.h"
#include "ground.h"
#include "buff/buff.h"
#include "state2221.h"
#include "state2222.h"
#include "state2223.h"
#include "state2224.h"
#include "state2225.h"
#include "log/logger.h"
#include <QString>
#include <QDebug>
#include <QDateTime>
#include <QVector>

State222::State222()
{
    m_state = STATE222_IDLE;
    m_state2221 = new State2221();
    m_state2222 = new State2222();
    m_state2223 = new State2223();
    m_state2224 = new State2224();
    m_state2225 = new State2225();
}

State222::~State222()
{
    delete m_state2221;
    delete m_state2222;
    delete m_state2223;
    delete m_state2224;
    delete m_state2225;
}

void State222::run(Ground* ground, int current)
{
    if (ground->m_group[current/10].m_item[current%10].h[0] <= 0)
    {
        m_state = STATE222_IDLE;
        return;
    }

    switch (m_state)
    {
    case STATE222_IDLE: {
        j7 = true;
        ground->target2223 = -1;
        m_state = STATE222_1;
    } break;

    case STATE222_1: {
        Logger::H().print222(ground, current);
        m_state2221->run(ground, current);
        m_state = check011(ground, current) ? STATE222_2 : STATE222_5;
    } break;

    case STATE222_2: {
        m_state2222->run(ground, current);
        m_state = STATE222_3;
    } break;

    case STATE222_3: {
        if (m_state2223->run(ground, current))
        {
            m_state = STATE222_4;
        }
        else
        {
            m_state = STATE222_5;
        }
    } break;

    case STATE222_4: {
        m_state2224->run(ground, current);
        m_state = checkj7(ground, current) ? STATE222_3 : STATE222_5;
        j7 = false;
    } break;

    case STATE222_5: {
        m_state2225->run(ground, current);
        m_state = STATE222_IDLE;
    } break;

    default:
        break;
    }
}

bool State222::check011(Ground* ground, int current)
{
    bool b = true;
    for (QSharedPointer<Buff> pbuff : ground->buff[1][current])
    {
        if (pbuff->id == 111)
        {
            return true;
        }
        if (pbuff->id == 11)
        {
            b = false;
        }
    }
    return b;
}

bool State222::checkj7(Ground* ground, int obj)
{
    if (j7 && qrand() % 100 + 1 > 100 - ground->m_group[obj/10].m_item[obj%10].j[7])
    {
        Logger::H().printcustom(ground, 2223, obj);
//        Logger::H().printcustom("2223 double\n");
        return true;
    }
    return false;
}
