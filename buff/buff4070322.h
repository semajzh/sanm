#ifndef BUFF4070322_H
#define BUFF4070322_H
#include "buff.h"

class Buff40703221 : public BuffC
{
public:
    Buff40703221() {}
    Buff40703221(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40703221; }
    virtual ~Buff40703221() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float i2 = 0.0f;
};

class Buff40703222 : public BuffC
{
public:
    Buff40703222() {}
    Buff40703222(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 40703222; }
    virtual ~Buff40703222() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> );

private:
    bool check4110121(Ground* ground);
    float i2 = 0.0f;
};

#endif // BUFF4070322_H
