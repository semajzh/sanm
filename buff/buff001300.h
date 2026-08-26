#ifndef BUFF001300_H
#define BUFF001300_H
#include "buff.h"

class Buff001300 : public BuffR
{
public:
    Buff001300() {}
    Buff001300(int s, int d, int m) : BuffR(s, d, m) { id = 1300; }
    virtual ~Buff001300() {}

    virtual void run(Ground* ) {}
    virtual bool run(Ground* ground, int obj);

private:
    int round = 0;
};

#endif // BUFF001300_H
