#include "dispatcher.h"
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include "state/state1.h"
#include "state/state2.h"
#include "state/state3.h"
#include "ground.h"
#include "log/logger.h"
#include "ui/name.h"


Dispatcher::Dispatcher(int round)
    : m_round(round)
{
    m_state1 = new State1();
    m_state2 = new State2();
    m_state3 = new State3();
    m_ground = new Ground();
#if 1
    Item item;
    for (unsigned long long h = 0; h < sizeof(item.h)/sizeof(int); ++h)
    {
        Name::hName(h);
    }
    for (unsigned long long i = 0; i < sizeof(item.i)/sizeof(float); ++i)
    {
        Name::iName(i);
    }
    for (unsigned long long j = 0; j < sizeof(item.j)/sizeof(float); ++j)
    {
        Name::jName(j);
    }
#endif
    m_ground->team[0] = 2;
    m_ground->team[1] = 9;
    Group::getGroup(m_ground->team[0], m_ground->m_group[0]);
    Group::getGroup(m_ground->team[1], m_ground->m_group[1]);
    m_state = STATE::STATE_1;
}

Dispatcher::~Dispatcher()
{
    delete m_state1;
    delete m_state2;
    delete m_state3;
    delete m_ground;
}
#include "buff/buff017.h"
void Dispatcher::run()
{
    qsrand(QDateTime::currentSecsSinceEpoch());
    int c = m_round;

    while (true)
    {
        switch (m_state)
        {
        case STATE_1:
            Logger::H().setlevel((m_round > 1) ? 1 : 3);
            m_state1->run(&m_ground);
            m_state = STATE_2;
            break;
        case STATE_2:
            m_state2->run(m_ground);
            if (m_state2->isIdle())
            {
                m_state = STATE_3;
            }
#if 0
            if (m_state2->m_state == 2)
            {
//                QSharedPointer<Buff> buff = QSharedPointer<Buff>(new Buff017(0, 0, 1, 1));
//                Ground::addBuff(m_ground, m_ground->buff[1][0], buff);

                int prt[20] = {0};
                for (int i = 0; i < 9999; ++i)
                {
                    bool g1 = (qrand() % 100 + 1 > 100 - 75);
                    QVector<int> objs = Ground::selectObjN(m_ground, 10, 0x0141 + (g1 ? 1 : 0) * 0x0100, 10);
                    for (int obj : objs)
                    {
                        prt[obj] += 1;
                    }
                    printf("\r%4d %4d %4d %4d %4d %4d", prt[0], prt[1], prt[2], prt[10], prt[11], prt[12]);
                }
                m_state = (STATE)9;
            }
#endif
            break;
        case STATE_3:
            m_state3->run(m_ground);
            m_state = STATE_IDLE;
            break;
        case STATE_IDLE:
            QThread::msleep(0);
//            static int c = m_round;
            if (!m_ground->isover())
            {
                m_ground->vs += 1;
                m_state = STATE_1;
            }
            else if (--c > 0)
            {
//                Group::getGroup(m_ground->team[1], m_ground->m_group[1]);
                m_ground->vs = 0;
                m_state = STATE_1;
            }
            else
            {
                return;
            }
            break;
        default:
            return;
        }
    }
}
