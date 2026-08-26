#ifndef BUFF500008_H
#define BUFF500008_H
#include "buff.h"

class Buff500008 : public BuffR
{
public:
    Buff500008() {}
    Buff500008(int s, int d, int m) : BuffR(s, d, m) { id = 500008; }
    virtual ~Buff500008() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

#endif // BUFF500008_H
