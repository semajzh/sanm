#ifndef BUFF302012_H
#define BUFF302012_H
#include "buff.h"

class Buff302012 : public BuffR
{
public:
    Buff302012() {}
    Buff302012(int s, int d, int m) : BuffR(s, d, m) { id = 302012; }
    virtual ~Buff302012() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    float j12 = 0.0f;
};

class Buff3020122 : public BuffC
{
public:
    Buff3020122() {}
    Buff3020122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3020122; }
    virtual ~Buff3020122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );

private:
    int index = 0;
    float maxi = 0.0f;
};

#endif // BUFF302012_H
