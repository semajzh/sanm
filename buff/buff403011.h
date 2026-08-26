#ifndef BUFF403011_H
#define BUFF403011_H
#include "buff.h"

class Buff403011 : public BuffR
{
public:
    Buff403011() {}
    Buff403011(int s, int d, int m) : BuffR(s, d, m) { id = 403011; }
    virtual ~Buff403011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF403011_H
