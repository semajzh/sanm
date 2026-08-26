#ifndef STATE2_H
#define STATE2_H

class Ground;
class State21;
class State22;
class State2
{
public:
    State2();
    virtual ~State2();
    virtual void run(Ground* ground);
    inline bool isIdle() {return (m_state == STATE2_IDLE);}

public:
    enum STATE2 {
        STATE2_IDLE = 0,
        STATE2_1,
        STATE2_2
    };

    STATE2 m_state;
    State21* m_state21;
    State22* m_state22;
};

#endif // STATE2_H
