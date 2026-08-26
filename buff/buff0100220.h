#ifndef BUFF0100220_H
#define BUFF0100220_H
#include "buff.h"

class Buff0100220 : public BuffC
{
public:
    Buff0100220() {}
    Buff0100220(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 100220; }
    virtual ~Buff0100220() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );
};

class Buff01002202 : public BuffC
{
public:
    Buff01002202() {}
    Buff01002202(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1002202; }
    virtual ~Buff01002202() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float i0 = 0.0f;
    float i1 = 0.0f;
};

#endif // BUFF0100220_H
