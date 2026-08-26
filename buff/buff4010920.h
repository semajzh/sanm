#ifndef BUFF4010920_H
#define BUFF4010920_H
#include "buff.h"

class Buff4010920 : public BuffR
{
public:
    Buff4010920() {}
    Buff4010920(int s, int d, int m) : BuffR(s, d, m) { id = 4010920; }
    virtual ~Buff4010920() {}

    virtual void run(Ground* );
    void run(Ground* , int );

private:
    bool check401091(Ground* ground, int obj);
    bool check40109202(Ground* ground, int obj);
};

class Buff40109202 : public BuffR
{
public:
    Buff40109202() {}
    Buff40109202(int s, int d, int m) : BuffR(s, d, m) { id = 40109202; }
    virtual ~Buff40109202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );
    virtual void run(Ground* ground);

private:
    bool check401091(Ground* ground, int obj);
    int count = 0;
    float l0 = 0.0f;
    float l4 = 0.0f;
    float l5 = 0.0f;
    float l08 = 0.0f;
    float l48 = 0.0f;
    float l58 = 0.0f;
};

#endif // BUFF4010920_H
