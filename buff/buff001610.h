#ifndef BUFF001610_H
#define BUFF001610_H
#include "buff.h"

class Buff001610 : public BuffR
{
public:
    Buff001610() {}
    Buff001610(int s, int d, int m) : BuffR(s, d, m) { id = 1610; }
    virtual ~Buff001610() {}

    virtual void run(Ground* );
};

class Buff001611 : public BuffR
{
public:
    Buff001611() {}
    Buff001611(int s, int d, int m) : BuffR(s, d, m) { id = 1611; }
    virtual ~Buff001611() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float i0 = 0.0f;
};

#endif // BUFF001610_H
