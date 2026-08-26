#ifndef BUFF001230_H
#define BUFF001230_H
#include "buff.h"

class Buff001230 : public BuffR
{
public:
    Buff001230() {}
    Buff001230(int s, int d, int m) : BuffR(s, d, m) { id = 1230; }
    virtual ~Buff001230() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}

private:
    float k2 = 0.0f;
};

#endif // BUFF001230_H
