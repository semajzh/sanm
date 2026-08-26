#ifndef BUFF001760_H
#define BUFF001760_H
#include "buff.h"

class Buff001760 : public BuffR
{
public:
    Buff001760() {}
    Buff001760(int s, int d, int m) : BuffR(s, d, m) { id = 1760; }
    virtual ~Buff001760() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001760_H
