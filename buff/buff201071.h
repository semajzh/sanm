#ifndef BUFF201071_H
#define BUFF201071_H
#include "buff.h"

class Buff201071 : public BuffR
{
public:
    Buff201071() {}
    Buff201071(int s, int d, int m) : BuffR(s, d, m) { id = 201071; }
    virtual ~Buff201071() {}
    virtual void run(Ground* ground);
};

#endif // BUFF201071_H
