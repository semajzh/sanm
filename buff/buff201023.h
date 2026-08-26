#ifndef BUFF201023_H
#define BUFF201023_H
#include "buff.h"

class Buff201023 : public BuffR
{
public:
    Buff201023() {}
    Buff201023(int s, int d, int m) : BuffR(s, d, m) { id = 201023; }
    virtual ~Buff201023() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int obj);
    void run(Ground* ground, int obj, float& point);
};

#endif // BUFF201023_H
