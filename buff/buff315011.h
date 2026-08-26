#ifndef BUFF315011_H
#define BUFF315011_H
#include "buff.h"

class Buff315011 : public BuffR
{
public:
    Buff315011() {}
    Buff315011(int s, int d, int m) : BuffR(s, d, m) { id = 315011; }
    virtual ~Buff315011() {}

    virtual void run(Ground* );
    void run(Ground* , int );

private:
    int check31501212(Ground* ground);
};

class Buff3150112 : public BuffR
{
public:
    Buff3150112() {}
    Buff3150112(int s, int d, int m) : BuffR(s, d, m) { id = 3150112; }
    virtual ~Buff3150112() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
    float j12 = 0.0f;
};

#endif // BUFF315011_H
