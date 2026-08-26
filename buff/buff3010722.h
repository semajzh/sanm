#ifndef BUFF3010722_H
#define BUFF3010722_H
#include "buff.h"

class Buff30107221 : public BuffC
{
public:
    Buff30107221() {}
    Buff30107221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30107221; }
    virtual ~Buff30107221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

class Buff30107222 : public BuffC
{
public:
    Buff30107222() {}
    Buff30107222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30107222; }
    virtual ~Buff30107222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

#endif // BUFF3010722_H
