#ifndef STATE2221_H
#define STATE2221_H

class Ground;
class State2221
{
public:
    State2221();
    virtual ~State2221();
    virtual void run(Ground* ground, int current);
    void buff1(Ground* ground, int current);
    void buff2(Ground* ground, int current);
};

#endif // STATE2221_H
