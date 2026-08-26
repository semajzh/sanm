#ifndef BUFF401031_H
#define BUFF401031_H
#include "buff.h"

class Buff401031 : public BuffR
{
public:
    Buff401031() {}
    Buff401031(int s, int d, int m) : BuffR(s, d, m) { id = 401031; }
    virtual ~Buff401031() {}

    virtual void run(Ground* ) {}
    void run(Ground* ground, int obj);
};

class Buff4010312 : public BuffC
{
public:
    Buff4010312() {}
    Buff4010312(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 4010312; }
    virtual ~Buff4010312() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k0 = 0.0f;
};

#endif // BUFF401031_H
