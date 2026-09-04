#ifndef BUFF201021_H
#define BUFF201021_H
#include "buff.h"

class Buff201021 : public BuffR
{
public:
    Buff201021() {}
    Buff201021(int s, int d, int m) : BuffR(s, d, m) { id = 201021; }
    virtual ~Buff201021() {}

    virtual void run(Ground* ground);
};

class Buff2010212 : public BuffC
{
public:
    Buff2010212() {}
    Buff2010212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 2010212; }
    virtual ~Buff2010212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j4 = 0.0f;
};

#endif // BUFF201021_H
