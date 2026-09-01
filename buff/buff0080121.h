#ifndef BUFF0080121_H
#define BUFF0080121_H
#include "buff.h"

class Buff00801211 : public BuffR
{
public:
    Buff00801211() {}
    Buff00801211(int s, int d, int m) : BuffR(s, d, m) { id = 801211; }
    virtual ~Buff00801211() {}

    virtual void run(Ground* ground);
};

class Buff00801212 : public BuffR
{
public:
    Buff00801212() {}
    Buff00801212(int s, int d, int m) : BuffR(s, d, m) { id = 801212; }
    virtual ~Buff00801212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0080121_H
