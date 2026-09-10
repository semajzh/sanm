#ifndef BUFF001850_H
#define BUFF001850_H
#include "buff.h"

class Buff001850 : public BuffR
{
public:
    Buff001850() {}
    Buff001850(int s, int d, int m) : BuffR(s, d, m) { id = 1850; }
    virtual ~Buff001850() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001850_H
