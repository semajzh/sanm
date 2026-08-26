#ifndef STATE22_H
#define STATE22_H


class Ground;
class State221;
class State222;
class State223;
class State22
{
public:
    State22();
    virtual ~State22();
    virtual void run(Ground* ground);
    inline bool isIdle() {return (m_state == STATE22_IDLE);}
    inline void idle() {m_state = STATE22_IDLE;}

public:
    enum STATE22 {
        STATE22_IDLE = 0,
        STATE22_1,
        STATE22_2,
        STATE22_3
    };

    STATE22 m_state;
    State221* m_state221;
    State222* m_state222;
    State223* m_state223;
};

#endif // STATE22_H
