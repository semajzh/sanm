#ifndef BUFF1010121_H
#define BUFF1010121_H
#include "buff.h"
#include <QVector>

class Buff10101211 : public BuffR
{
public:
    Buff10101211() {}
    Buff10101211(int s, int d, int m) : BuffR(s, d, m) { id = 10101211; }
    virtual ~Buff10101211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float l0 = 0.0f;
   float j11 = 0.0f;
   float j12 = 0.0f;
};

class Buff10101212 : public BuffR
{
public:
    Buff10101212() {}
    Buff10101212(int s, int d, int m) : BuffR(s, d, m) { id = 10101212; }
    virtual ~Buff10101212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF1010121_H
