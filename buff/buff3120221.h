#ifndef BUFF3120221_H
#define BUFF3120221_H
#include "buff.h"

class Buff3120221 : public BuffR
{
public:
    Buff3120221() {}
    Buff3120221(int s, int d, int m) : BuffR(s, d, m) { id = 3120221; }
    virtual ~Buff3120221() {}

    virtual void run(Ground* ) {}
    void run(Ground* , int );

private:
    bool check312021(Ground* ground, int obj);
};

class Buff31202212 : public BuffR
{
public:
    Buff31202212() {}
    Buff31202212(int s, int d, int m) : BuffR(s, d, m) { id = 31202212; }
    virtual ~Buff31202212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* );
    int run(Ground* , int );

private:
    int count = 0;
    float l0 = 0.0f;
    float j1 = 0.0f;
    float j3 = 0.0f;
};

#endif // BUFF3120221_H
