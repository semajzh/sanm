#ifndef BUFF0170221_H
#define BUFF0170221_H
#include "buff.h"

class Buff0170221 : public BuffR
{
public:
    Buff0170221() {}
    Buff0170221(int s, int d, int m) : BuffR(s, d, m) { id = 170221; }
    virtual ~Buff0170221() {}

    virtual void run(Ground* ground);
};

class Buff01702212 : public BuffC
{
public:
    Buff01702212() {}
    Buff01702212(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1702212; }
    virtual ~Buff01702212() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int index = -1;
    float i0 = 0.0f;
    float k0 = 0.0f;
};

#endif // BUFF0170221_H
