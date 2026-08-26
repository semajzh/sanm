#ifndef BUFF4010121_H
#define BUFF4010121_H
#include "buff.h"

class Buff4010121 : public BuffR
{
public:
    Buff4010121() {}
    Buff4010121(int s, int d, int m) : BuffR(s, d, m) { id = 4010121; }
    virtual ~Buff4010121() {}

    virtual void run(Ground* );
};

class Buff40101212 : public BuffC
{
public:
    Buff40101212() {}
    Buff40101212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40101212; }
    virtual ~Buff40101212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);

private:
    bool check401011(Ground* ground, int obj);
    bool check4110121(Ground* ground);
    float i2 = 0.0f;
};

class Buff40101213 : public BuffC
{
public:
    Buff40101213() {}
    Buff40101213(int s, int d, int m, int t, int r) : BuffC(s, d, m, t, r) { id = 40101213; }
    virtual ~Buff40101213() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    bool check401011(Ground* ground, int obj);
    float i2 = 0.0f;
};

#endif // BUFF4010121_H
