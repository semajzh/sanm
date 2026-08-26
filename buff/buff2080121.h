#ifndef BUFF2080121_H
#define BUFF2080121_H
#include "buff.h"

class Buff20801211 : public BuffR
{
public:
    Buff20801211() {}
    Buff20801211(int s, int d, int m) : BuffR(s, d, m) { id = 20801211; }
    virtual ~Buff20801211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l2 = 0.0f;
};

class Buff20801212 : public BuffR
{
public:
    Buff20801212() {}
    Buff20801212(int s, int d, int m) : BuffR(s, d, m) { id = 20801212; }
    virtual ~Buff20801212() {}

    virtual void run(Ground* ground);
};

class Buff20801213 : public BuffR
{
public:
    Buff20801213() {}
    Buff20801213(int s, int d, int m) : BuffR(s, d, m) { id = 20801213; }
    virtual ~Buff20801213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    bool k7 = true;
};

class Buff20801214 : public BuffR
{
public:
    Buff20801214() {}
    Buff20801214(int s, int d, int m) : BuffR(s, d, m) { id = 20801214; }
    virtual ~Buff20801214() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float l0 = 0.0f;
};

#endif // BUFF2080121_H
