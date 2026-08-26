#ifndef BUFF001580_H
#define BUFF001580_H
#include "buff.h"

class Buff001580 : public BuffR
{
public:
    Buff001580() {}
    Buff001580(int s, int d, int m) : BuffR(s, d, m) { id = 1580; }
    virtual ~Buff001580() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001580_H
