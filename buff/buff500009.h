#ifndef BUFF500009_H
#define BUFF500009_H
#include "buff.h"

class Buff500009 : public BuffR
{
public:
    Buff500009() {}
    Buff500009(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 500009; }
    virtual ~Buff500009() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k0 = 0.0f;
};

#endif // BUFF500009_H
