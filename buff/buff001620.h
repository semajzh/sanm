#ifndef BUFF001620_H
#define BUFF001620_H
#include "buff.h"

class Buff001620 : public BuffR
{
public:
    Buff001620() {}
    Buff001620(int s, int d, int m) : BuffR(s, d, m) { id = 1620; }
    virtual ~Buff001620() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001620_H
