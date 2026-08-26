#ifndef BUFF401052_H
#define BUFF401052_H
#include "buff.h"

class Buff401052 : public BuffR
{
public:
    Buff401052() {}
    Buff401052(int s, int d, int m) : BuffR(s, d, m) { id = 401052; }
    virtual ~Buff401052() {}

    virtual void run(Ground* ground);

private:
    int selectObjMaxi0(Ground* ground, int obj);
};

class Buff4010522 : public BuffC
{
public:
    Buff4010522() {}
    Buff4010522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010522; }
    virtual ~Buff4010522() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF401052_H
