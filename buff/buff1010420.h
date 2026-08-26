#ifndef BUFF1010420_H
#define BUFF1010420_H
#include "buff.h"

class Buff1010420 : public BuffR
{
public:
    Buff1010420() {}
    Buff1010420(int s, int d, int m) : BuffR(s, d, m) { id = 1010420; }
    virtual ~Buff1010420() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void run(Ground* );

private:
    bool check4110121(Ground* ground);
    float i0 = 0.0f;
    float i2 = 0.0f;
    float i3 = 0.0f;
    int count = 0;
};

class Buff10104202 : public BuffR
{
public:
    Buff10104202() {}
    Buff10104202(int s, int d, int m) : BuffR(s, d, m) { id = 10104202; }
    virtual ~Buff10104202() {}

    virtual void run(Ground* );

private:
    bool check1010420(Ground* ground, int obj);
};

class Buff10104203 : public BuffR
{
public:
    Buff10104203() {}
    Buff10104203(int s, int d, int m) : BuffR(s, d, m) { id = 10104203; }
    virtual ~Buff10104203() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    float j13 = 0.0f;
};

#endif // BUFF1010420_H
