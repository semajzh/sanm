#ifndef BUFF001250_H
#define BUFF001250_H
#include "buff.h"

class Buff001250 : public BuffR
{
public:
    Buff001250() {}
    Buff001250(int s, int d, int m) : BuffR(s, d, m) { id = 1250; }
    virtual ~Buff001250() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF001250_H
