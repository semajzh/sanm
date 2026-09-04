#ifndef BUFF201012_H
#define BUFF201012_H
#include "buff.h"

class Buff201012 : public BuffR
{
public:
    Buff201012() {}
    Buff201012(int s, int d, int m) : BuffR(s, d, m) { id = 201012; }
    virtual ~Buff201012() {}

    virtual void run(Ground* ground);
};

class Buff2010122 : public BuffC
{
public:
    Buff2010122() {}
    Buff2010122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2010122; }
    virtual ~Buff2010122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF201012_H
