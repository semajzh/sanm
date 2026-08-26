#ifndef BUFF4020221_H
#define BUFF4020221_H
#include "buff.h"

class Buff4020221 : public BuffR
{
public:
    Buff4020221() {}
    Buff4020221(int s, int d, int m) : BuffR(s, d, m) { id = 4020221; }
    virtual ~Buff4020221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float l2 = 0.0f;
};

#endif // BUFF4020221_H
