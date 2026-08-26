#ifndef BUFF001240_H
#define BUFF001240_H
#include "buff.h"

class Buff001240 : public BuffR
{
public:
    Buff001240() {}
    Buff001240(int s, int d, int m) : BuffR(s, d, m) { id = 1240; }
    virtual ~Buff001240() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k2 = 0.0f;
};

#endif // BUFF001240_H
