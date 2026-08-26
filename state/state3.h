#ifndef STATE3_H
#define STATE3_H
#include "state.h"

class Ground;
class State3
{
public:
    State3();
    virtual ~State3();
    virtual void run(Ground* ground);
};

#endif // STATE3_H
