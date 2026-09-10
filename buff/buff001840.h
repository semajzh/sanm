#ifndef BUFF001840_H
#define BUFF001840_H
#include "buff.h"

class Buff001840 : public BuffR
{
public:
    Buff001840() {}
    Buff001840(int s, int d, int m) : BuffR(s, d, m) { id = 1840; }
    virtual ~Buff001840() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001840_H
