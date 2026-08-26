#ifndef BUFF0060121_H
#define BUFF0060121_H
#include "buff.h"
#include <QVector>
#include <QSharedPointer>

class Buff00601211 : public BuffC
{
public:
    Buff00601211() {}
    Buff00601211(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 601211; }
    virtual ~Buff00601211() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j4 = 0.0f;
};

class Buff00601212 : public BuffR
{
public:
    Buff00601212() {}
    Buff00601212(int s, int d, int m) : BuffR(s, d, m) { id = 601212; }
    virtual ~Buff00601212() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float k2 = 0.0f;
    float l2 = 0.0f;
    int objk2 = -1;
    int objl2 = -1;
};

#endif // BUFF0060121_H
