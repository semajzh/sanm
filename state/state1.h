#ifndef STATE1_H
#define STATE1_H
#include "state.h"

class Ground;
class State1
{
public:
    State1();
    virtual ~State1();
    virtual void run(Ground** ground);
};

#endif // STATE1_H
