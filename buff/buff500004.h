#ifndef BUFF500004_H
#define BUFF500004_H
#include "buff.h"

class Buff500004 : public BuffR
{
public:
    Buff500004() {}
    Buff500004(int s, int d, int m) : BuffR(s, d, m) { id = 500004; }
    virtual ~Buff500004() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF500004_H
