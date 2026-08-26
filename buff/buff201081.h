#ifndef BUFF201081_H
#define BUFF201081_H
#include "buff.h"

class Buff201081 : public BuffR
{
public:
    Buff201081() {}
    Buff201081(int s, int d, int m) : BuffR(s, d, m) { id = 201081; }
    virtual ~Buff201081() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* ) {}
    float run(Ground* ground, int );

private:
    float i0 = 0.0f;
    int count = 0;
};

#endif // BUFF201081_H
