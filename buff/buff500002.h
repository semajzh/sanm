#ifndef BUFF500002_H
#define BUFF500002_H
#include "buff.h"

class Buff500002 : public BuffR
{
public:
    Buff500002() {}
    Buff500002(int s, int d, int m) : BuffR(s, d, m) { id = 500002; }
    virtual ~Buff500002() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

#endif // BUFF500002_H
