#ifndef BUFF001530_H
#define BUFF001530_H
#include "buff.h"

class Buff001530 : public BuffR
{
public:
    Buff001530() {}
    Buff001530(int s, int d, int m) : BuffR(s, d, m) { id = 1530; }
    virtual ~Buff001530() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001530_H
