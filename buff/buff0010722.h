#ifndef BUFF0010722_H
#define BUFF0010722_H
#include "buff.h"

class Buff0010722 : public BuffC
{
public:
    Buff0010722() {}
    Buff0010722(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10722; }
    virtual ~Buff0010722() {}
};

class Buff00107222 : public BuffC
{
public:
    Buff00107222() {}
    Buff00107222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 107222; }
    virtual ~Buff00107222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF0010722_H
