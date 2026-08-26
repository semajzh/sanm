#ifndef BUFF0140221_H
#define BUFF0140221_H
#include "buff.h"

class Buff0140221 : public BuffR
{
public:
    Buff0140221() {}
    Buff0140221(int s, int d, int m) : BuffR(s, d, m) { id = 140221; }
    virtual ~Buff0140221() {}

    virtual void run(Ground* );
};

class Buff01402212 : public BuffR
{
public:
    Buff01402212() {}
    Buff01402212(int s, int d, int m) : BuffR(s, d, m) { id = 1402212; }
    virtual ~Buff01402212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float j2 = 0.0f;
};

#endif // BUFF0140221_H
