#ifndef BUFF0013320_H
#define BUFF0013320_H
#include "buff.h"

class Buff0013320: public BuffR
{
public:
    Buff0013320() {}
    Buff0013320(int s, int d, int m) : BuffR(s, d, m) { id = 13320; }
    virtual ~Buff0013320() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);
    int run(Ground* ground, int );

private:
    float l1 = 0.0f;
    float l2 = 0.0f;
    float l3 = 0.0f;
    float l4 = 0.0f;
    float l5 = 0.0f;
};

#endif // BUFF0013320_H
