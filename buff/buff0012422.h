#ifndef BUFF0012422_H
#define BUFF0012422_H
#include "buff.h"

class Buff0012422 : public BuffC
{
public:
    Buff0012422() {}
    Buff0012422(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 12422; }
    virtual ~Buff0012422() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j9 = 0.0f;
};

class Buff00124221 : public BuffC
{
public:
    Buff00124221() {}
    Buff00124221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 124221; }
    virtual ~Buff00124221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground*, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF0012422_H
