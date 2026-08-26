#ifndef BUFF301081_H
#define BUFF301081_H
#include "buff.h"

class Buff301081 : public BuffR
{
public:
    Buff301081() {}
    Buff301081(int s, int d, int m) : BuffR(s, d, m) { id = 301081; }
    virtual ~Buff301081() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l1 = 0.0f;
};

#endif // BUFF301081_H
