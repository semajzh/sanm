#ifndef BUFF0180222_H
#define BUFF0180222_H
#include "buff.h"

class Buff0180222 : public BuffC
{
public:
    Buff0180222() {}
    Buff0180222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 180222; }
    virtual ~Buff0180222() {}
};

class Buff01802221 : public BuffC
{
public:
    Buff01802221() {}
    Buff01802221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1802221; }
    virtual ~Buff01802221() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    float i1 = 0.0f;
};

class Buff01802222 : public BuffC
{
public:
    Buff01802222() {}
    Buff01802222(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 1802222; }
    virtual ~Buff01802222() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

class Buff01802223 : public BuffC
{
public:
    Buff01802223() {}
    Buff01802223(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 1802223; }
    virtual ~Buff01802223() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif
