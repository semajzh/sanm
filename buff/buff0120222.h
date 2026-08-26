#ifndef BUFF0120222_H
#define BUFF0120222_H
#include "buff.h"

class Buff01202221 : public BuffC
{
public:
    Buff01202221() {}
    Buff01202221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1202221; }
    virtual ~Buff01202221() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    float i1 = 0.0f;
};

class Buff01202223 : public BuffC
{
public:
    Buff01202223() {}
    Buff01202223(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1202223; }
    virtual ~Buff01202223() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    float i0 = 0.0f;
};

#endif // BUFF0120222_H
