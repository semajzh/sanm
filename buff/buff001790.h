#ifndef BUFF001790_H
#define BUFF001790_H
#include "buff.h"

class Buff001790 : public BuffR
{
public:
    Buff001790() {}
    Buff001790(int s, int d, int m) : BuffR(s, d, m) { id = 1790; }
    virtual ~Buff001790() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001790_H
