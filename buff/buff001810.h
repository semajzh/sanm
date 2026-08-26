#ifndef BUFF001810_H
#define BUFF001810_H
#include "buff.h"

class Buff001810 : public BuffR
{
public:
    Buff001810() {}
    Buff001810(int s, int d, int m) : BuffR(s, d, m) { id = 1810; }
    virtual ~Buff001810() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001810_H
