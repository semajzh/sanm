#ifndef BUFF0030422_H
#define BUFF0030422_H
#include "buff.h"

class Buff00304221 : public BuffC
{
public:
    Buff00304221() {}
    Buff00304221(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 304221; }
    virtual ~Buff00304221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float data = 0.0f;
};

class Buff00304222 : public BuffC
{
public:
    Buff00304222() {}
    Buff00304222(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 304222; }
    virtual ~Buff00304222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float i1 = 0.0f;
    float i2 = 0.0f;
};

#endif // BUFF0030422_H
