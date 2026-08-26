#ifndef BUFF3050122_H
#define BUFF3050122_H
#include "buff.h"

class Buff30501221 : public BuffC
{
public:
    Buff30501221() {}
    Buff30501221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 30501221; }
    virtual ~Buff30501221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k2 = 0.0f;
};

class Buff30501222 : public BuffR
{
public:
    Buff30501222() {}
    Buff30501222(int s, int d, int m) : BuffR(s, d, m) { id = 30501222; }
    virtual ~Buff30501222() {}

    virtual void run(Ground* ground);

private:
    bool check30501221(Ground* ground, int obj);
};

#endif // BUFF3050122_H
