#ifndef BUFF001270_H
#define BUFF001270_H
#include "buff.h"

class Buff001270 : public BuffR
{
public:
    Buff001270() {}
    Buff001270(int s, int d, int m) : BuffR(s, d, m) { id = 1270; }
    virtual ~Buff001270() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF001270_H
