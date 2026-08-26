#include "state22.h"
#include "ground.h"
#include "buff/buff.h"
#include "state221.h"
#include "state222.h"
#include "state223.h"
#include "log/logger.h"
#include <QDebug>

State22::State22()
{
    m_state = STATE22_IDLE;
    m_state221 = new State221();
    m_state222 = new State222();
    m_state223 = new State223();
}

State22::~State22()
{
    delete m_state221;
    delete m_state222;
    delete m_state223;
}

void State22::run(Ground* ground)
{
    static int current = 0;
    switch (m_state)
    {
    case STATE22_IDLE: {
        m_state = STATE22_1;
        m_state222->idle();
    } break;

    case STATE22_1: {
        Logger::H().print22(ground);
        m_state221->run(ground);
        current = 0;
        m_state = STATE22_2;
    } break;

    case STATE22_2: {
        if (current > 5)
        {
            m_state = STATE22_3;
            break;
        }
        m_state222->run(ground, ground->m_sort[current]);
        if (m_state222->isIdle())
        {
            ++current;
        }
    } break;

    case STATE22_3: {
        m_state223->run(ground);
        m_state = STATE22_IDLE;
    } break;

    default:
        break;
    }
}
