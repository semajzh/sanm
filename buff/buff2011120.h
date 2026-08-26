#ifndef BUFF2011120_H
#define BUFF2011120_H
#include "buff.h"

class Buff2011120 : public BuffR
{
public:
    Buff2011120() {}
    Buff2011120(int s, int d, int m) : BuffR(s, d, m) { id = 2011120; }
    virtual ~Buff2011120() {}
    virtual void run(Ground* );

private:
    bool check201111(Ground* ground, int obj);
};

#endif // BUFF2011120_H
