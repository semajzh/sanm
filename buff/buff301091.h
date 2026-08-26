#ifndef BUFF301091_H
#define BUFF301091_H
#include "buff.h"

class Buff3010911 : public BuffR
{
public:
    Buff3010911() {}
    Buff3010911(int s, int d, int m) : BuffR(s, d, m) { id = 3010911; }
    virtual ~Buff3010911() {}
    virtual void run(Ground* ground);
};

class Buff3010912 : public BuffC
{
public:
    Buff3010912() {}
    Buff3010912(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3010912; }
    virtual ~Buff3010912() {}

    virtual void run(Ground* ) {}
    float run(Ground* ground, int obj);

private:
    bool check004(Ground* ground, int obj);
};

#endif // BUFF301091_H
