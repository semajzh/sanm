#ifndef BUFF3010520_H
#define BUFF3010520_H
#include "buff.h"

class Buff3010520 : public BuffR
{
public:
    Buff3010520() {}
    Buff3010520(int s, int d, int m) : BuffR(s, d, m) { id = 3010520; }
    virtual ~Buff3010520() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j6 = 0.0f;
};

class Buff30105202 : public BuffR
{
public:
    Buff30105202() {}
    Buff30105202(int s, int d, int m) : BuffR(s, d, m) { id = 30105202; }
    virtual ~Buff30105202() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> );
    virtual void run(Ground* ground);

private:
    int count = 0;
};

#endif // BUFF3010520_H
