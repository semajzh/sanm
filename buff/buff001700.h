#ifndef BUFF001700_H
#define BUFF001700_H
#include "buff.h"

class Buff001700 : public BuffR
{
public:
    Buff001700() {}
    Buff001700(int s, int d, int m) : BuffR(s, d, m) { id = 1700; }
    virtual ~Buff001700() {}

    virtual void run(Ground* );
};

class Buff001701 : public BuffR
{
public:
    Buff001701() {}
    Buff001701(int s, int d, int m) : BuffR(s, d, m) { id = 1701; }
    virtual ~Buff001701() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF001700_H
