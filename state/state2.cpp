#include "state2.h"
#include "ground.h"
#include "state21.h"
#include "state22.h"
#include <QDebug>

State2::State2()
{
    m_state21 = new State21();
    m_state22 = new State22();
    m_state = STATE2_IDLE;
}

State2::~State2()
{
    delete m_state21;
    delete m_state22;
}

void State2::run(Ground* ground)
{
    switch (m_state)
    {
    case STATE2_IDLE: {
        m_state = STATE2_1;
        m_state22->idle();
    } break;

    case STATE2_1: {
        ground->m_round = 0;
        m_state21->run(ground);
        m_state = STATE2_2;
    } break;

    case STATE2_2: {
        if (m_state22->isIdle())
        {
            ++ground->m_round;
        }
        if (ground->isover() || ground->m_round > 8)
        {
            m_state = STATE2_IDLE;
        }
        else
        {
            m_state22->run(ground);
        }
    } break;

    default:
        break;
    }
}
