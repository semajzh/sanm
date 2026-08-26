#ifndef BUFF3091120_H
#define BUFF3091120_H
#include "buff.h"

class Buff3091120 : public BuffR
{
public:
    Buff3091120() {}
    Buff3091120(int s, int d, int m) : BuffR(s, d, m) { id = 3091120; }
    virtual ~Buff3091120() {}

    virtual void enter(Ground*);
    virtual void exit(Ground*);
    virtual void run(Ground* ) {}
    bool run(Ground* ground, int method, float& point);
};

#endif // BUFF3091120_H
