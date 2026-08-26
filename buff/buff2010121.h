#ifndef BUFF2010121_H
#define BUFF2010121_H
#include "buff.h"
#include <QVector>

class Buff20101211 : public BuffR
{
public:
    Buff20101211() {}
    Buff20101211(int s, int d, int m) : BuffR(s, d, m) { id = 20101211; }
    virtual ~Buff20101211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float i2 = 0.0f;
};

class Buff20101212 : public BuffR
{
public:
    Buff20101212() {}
    Buff20101212(int s, int d, int m) : BuffR(s, d, m) { id = 20101212; }
    virtual ~Buff20101212() {}

    virtual void run(Ground* ground);
};

#endif // BUFF2010121_H
