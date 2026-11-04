#ifndef BUFF318021_H
#define BUFF318021_H
#include "buff.h"

class Buff318021 : public BuffR
{
public:
    Buff318021() {}
    Buff318021(int s, int d, int m) : BuffR(s, d, m) { id = 318021; }
    virtual ~Buff318021() {}

    virtual void run(Ground* ) {}
    virtual void run(Ground* ground, int n);
};

class Buff3180211 : public BuffC
{
public:
    Buff3180211(int s, int d, int m, int r, int n) : BuffC(s, d, m, r, n) { id = n == 4 ? 3180211 : 3180212; }
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j = 0;
};

#endif
