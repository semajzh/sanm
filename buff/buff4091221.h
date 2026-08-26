#ifndef BUFF4091221_H
#define BUFF4091221_H
#include "buff.h"

class Buff4091221 : public BuffR
{
public:
    Buff4091221() {}
    Buff4091221(int s, int d, int m) : BuffR(s, d, m) { id = 4091221; }
    virtual ~Buff4091221() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

class Buff40912212 : public BuffR
{
public:
    Buff40912212() {}
    Buff40912212(int s, int d, int m) : BuffR(s, d, m) { id = 40912212; }
    virtual ~Buff40912212() {}

    virtual void run(Ground* );
    virtual void run(Ground* , int );
};

class Buff40912213 : public BuffC
{
public:
    Buff40912213() {}
    Buff40912213(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40912213; }
    virtual ~Buff40912213() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
    float k0 = 0.0f;
    float l0 = 0.0f;
};

class Buff40912214 : public BuffR
{
public:
    Buff40912214() {}
    Buff40912214(int s, int d, int m) : BuffR(s, d, m) { id = 40912214; }
    virtual ~Buff40912214() {}

    virtual void enter(Ground* );
    virtual void update(Ground* , QSharedPointer<Buff> );

private:
    int count = 0;
};

class Buff40912215 : public BuffC
{
public:
    Buff40912215() {}
    Buff40912215(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40912215; }
    virtual ~Buff40912215() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float l0 = 0.0f;
};

#endif // BUFF4091221_H
