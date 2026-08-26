#ifndef STATE2225_H
#define STATE2225_H


class Ground;
class State2225
{
public:
    State2225();
    virtual ~State2225();
    virtual void run(Ground* ground, int current);

private:
    void buff8(Ground* ground, int current);
    void buff9(Ground* ground, int current);
};

#endif // STATE2225_H
