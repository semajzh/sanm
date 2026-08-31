#ifndef BUFF3010621_H
#define BUFF3010621_H
#include "buff.h"

class Buff3010621 : public BuffR
{
public:
    Buff3010621() {}
    Buff3010621(int s, int d, int m) : BuffR(s, d, m) { id = 3010621; }
    virtual ~Buff3010621() {}
    virtual void run(Ground* ground);
};

class Buff30106212 : public BuffC
{
public:
    Buff30106212() {}
    Buff30106212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30106212; }
    virtual ~Buff30106212() {}
    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    float l0 = 0.0f;
};

#endif // BUFF3010621_H
