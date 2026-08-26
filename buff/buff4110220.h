#ifndef BUFF4110220_H
#define BUFF4110220_H
#include "buff.h"

class Buff41102201 : public BuffR
{
public:
    Buff41102201() {}
    Buff41102201(int s, int d, int m) : BuffR(s, d, m) { id = 41102201; }
    virtual ~Buff41102201() {}

    virtual void run(Ground* ) {}
    bool run(Ground* ground, int obj);
    void run(Ground* ground, float point);

private:
    bool check020(Ground* ground, int obj);
};

class Buff41102202 : public BuffR
{
public:
    Buff41102202() {}
    Buff41102202(int s, int d, int m) : BuffR(s, d, m) { id = 41102202; }
    virtual ~Buff41102202() {}

    virtual void run(Ground* );
};

class Buff41102203 : public BuffR
{
public:
    Buff41102203() {}
    Buff41102203(int s, int d, int m) : BuffR(s, d, m) { id = 41102203; }
    virtual ~Buff41102203() {}

    virtual void run(Ground* );
};

class Buff41102204 : public BuffC
{
public:
    Buff41102204() {}
    Buff41102204(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 41102204; }
    virtual ~Buff41102204() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    float i0 = 0.0f;
    float i2 = 0.0f;
};

class Buff41102205 : public BuffC
{
public:
    Buff41102205() {}
    Buff41102205(int s, int d, int m, int r, int t) : BuffC(s, d, m, r, t) { id = 41102205; }
    virtual ~Buff41102205() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check4110121(Ground* ground);
    float i0 = 0.0f;
    float i2 = 0.0f;
};

#endif // BUFF4110220_H
