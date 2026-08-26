#ifndef STATE_H
#define STATE_H


class State
{
public:
    State();
    virtual ~State();
    virtual void run() = 0;
};

#endif // STATE_H
