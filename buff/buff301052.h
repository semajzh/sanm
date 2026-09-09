#ifndef BUFF301052_H
#define BUFF301052_H
#include "buff.h"

class Buff301052 : public BuffR
{
public:
    Buff301052() {}
    Buff301052(int s, int d, int m) : BuffR(s, d, m) { id = 301052; }
    virtual ~Buff301052() {}

    virtual void run(Ground* );
};

class Buff3010522 : public BuffC
{
public:
    Buff3010522() {}
    Buff3010522(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3010522; }
    virtual ~Buff3010522() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j6 = 0.0f;
    float k5 = 0.0f;
};

#endif // BUFF301052_H
