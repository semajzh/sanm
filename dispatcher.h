#ifndef DISPATCHER_H
#define DISPATCHER_H

#include <QThread>

class State1;
class State2;
class State3;
class Ground;
class Dispatcher : public QThread
{
public:
    Dispatcher(int round = 1);
    virtual ~Dispatcher();

 protected:
    void run() override;

public:
    enum STATE {
        STATE_IDLE = 0,
        STATE_1, //starting
        STATE_2, //doing
        STATE_3  //ending
    };

    inline void setState(STATE s) {
        m_state = s;
    }

private:
    STATE m_state;
    State1* m_state1;
    State2* m_state2;
    State3* m_state3;
    int m_round;
    Ground* m_ground;
};



#endif // DISPATCHER_H
