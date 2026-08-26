#ifndef STATE2224_H
#define STATE2224_H


class Ground;
class State2224
{
public:
    State2224();
    virtual ~State2224();
    virtual void run(Ground* ground, int current);

private:
    bool check011(Ground* ground, int obj);
};

#endif // STATE2224_H
