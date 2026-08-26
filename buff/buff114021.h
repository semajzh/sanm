#ifndef BUFF114021_H
#define BUFF114021_H
#include "buff.h"

class Buff114021 : public BuffR
{
public:
    Buff114021() {}
    Buff114021(int s, int d, int m) : BuffR(s, d, m) { id = 114021; }
    virtual ~Buff114021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF114021_H
