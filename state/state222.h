#ifndef STATE222_H
#define STATE222_H


class Ground;
class State2221;
class State2222;
class State2223;
class State2224;
class State2225;
class State222
{
public:
    State222();
    virtual ~State222();
    virtual void run(Ground* ground, int current);
    inline bool isIdle() {return (m_state == STATE222_IDLE);}
    inline void idle() {m_state = STATE222_IDLE;}

public:
    enum STATE222 {
        STATE222_IDLE = 0,
        STATE222_1,
        STATE222_2,
        STATE222_3,
        STATE222_4,
        STATE222_5
    };

    STATE222 m_state;
    State2221* m_state2221;
    State2222* m_state2222;
    State2223* m_state2223;
    State2224* m_state2224;
    State2225* m_state2225;

private:
    bool check011(Ground* ground, int current);
    bool j7;
    bool checkj7(Ground* ground, int current);
};

#endif // STATE222_H
