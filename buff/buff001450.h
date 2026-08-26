#ifndef BUFF001450_H
#define BUFF001450_H
#include "buff.h"

class Buff001450 : public BuffR
{
public:
    Buff001450() {}
    Buff001450(int s, int d, int m) : BuffR(s, d, m) { id = 1450; }
    virtual ~Buff001450() {}

    virtual void run(Ground* );
};

class Buff001451 : public BuffR
{
public:
    Buff001451() {}
    Buff001451(int s, int d, int m) : BuffR(s, d, m) { id = 1451; }
    virtual ~Buff001451() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float l0 = 0.0f;
};

#endif // BUFF001450_H
