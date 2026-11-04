#ifndef BUFF418011_H
#define BUFF418011_H
#include "buff.h"

class Buff418011 : public BuffR
{
public:
    Buff418011() {}
    Buff418011(int s, int d, int m) : BuffR(s, d, m) { id = 418011; }
    virtual ~Buff418011() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int m);

private:
    int count = 0;
    float k0 = 0;
};

#endif
