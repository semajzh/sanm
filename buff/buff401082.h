#ifndef BUFF401082_H
#define BUFF401082_H
#include "buff.h"

class Buff401082 : public BuffR
{
public:
    Buff401082() {}
    Buff401082(int s, int d, int m) : BuffR(s, d, m) { id = 401082; }
    virtual ~Buff401082() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF401082_H
