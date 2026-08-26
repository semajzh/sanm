#ifndef BUFF2040120_H
#define BUFF2040120_H
#include "buff.h"

class Buff2040120 : public BuffR
{
public:
    Buff2040120() {}
    Buff2040120(int s, int d, int m) : BuffR(s, d, m) { id = 2040120; }
    virtual ~Buff2040120() {}
    virtual void run(Ground* );

private:
    int round = 0;
};

#endif // BUFF2040120_H
