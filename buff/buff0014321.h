#ifndef BUFF0014321_H
#define BUFF0014321_H
#include "buff.h"
#include <QVector>

class Buff00143211: public BuffR
{
public:
    Buff00143211() {}
    Buff00143211(int s, int d, int m) : BuffR(s, d, m) { id = 143211; }
    virtual ~Buff00143211() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float i0 = 0.0f;
};

class Buff00143212: public BuffR
{
public:
    Buff00143212() {}
    Buff00143212(int s, int d, int m) : BuffR(s, d, m) { id = 143212; }
    virtual ~Buff00143212() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float i1 = 0.0f;
};

class Buff00143213: public BuffR
{
public:
    Buff00143213() {}
    Buff00143213(int s, int d, int m) : BuffR(s, d, m) { id = 143213; }
    virtual ~Buff00143213() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    int count = 0;
    float i2 = 0.0f;
};

#endif // BUFF0014321_H
