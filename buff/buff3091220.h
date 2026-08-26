#ifndef BUFF3091220_H
#define BUFF3091220_H
#include "buff.h"

class Buff3091220 : public BuffR
{
public:
    Buff3091220() {}
    Buff3091220(int s, int d, int m) : BuffR(s, d, m) { id = 3091220; }
    virtual ~Buff3091220() {}

    virtual void enter(Ground*);
    virtual void exit(Ground*);
    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);

private:
    float k3 = 0.0f;
};

class Buff30912202 : public BuffC
{
public:
    Buff30912202() {}
    Buff30912202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30912202; }
    virtual ~Buff30912202() {}

    virtual void enter(Ground*);
    virtual void exit(Ground*);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF3091220_H
