#ifndef BUFF411011_H
#define BUFF411011_H
#include "buff.h"

class Buff4110111 : public BuffR
{
public:
    Buff4110111() {}
    Buff4110111(int s, int d, int m) : BuffR(s, d, m) { id = 4110111; }
    virtual ~Buff4110111() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

class Buff4110112 : public BuffR
{
public:
    Buff4110112() {}
    Buff4110112(int s, int d, int m) : BuffR(s, d, m) { id = 4110112; }
    virtual ~Buff4110112() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    void selectMaxi(Ground* ground);
    int maxin = -1;
    float maxi = 0.0f;
};

#endif // BUFF411011_H
