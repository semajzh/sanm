#ifndef BUFF001870_H
#define BUFF001870_H
#include "buff.h"

class Buff001870 : public BuffR
{
public:
    Buff001870() {}
    Buff001870(int s, int d, int m) : BuffR(s, d, m) { id = 1870; }
    virtual ~Buff001870() {}

    virtual void run(Ground* ground);
};

class Buff0018702 : public BuffC
{
public:
    Buff0018702() {}
    Buff0018702(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 18702; }
    virtual ~Buff0018702() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* ground, QSharedPointer<Buff> buff);

private:
    int count = 0;
    float k4 = 0.0f;
};

#endif // BUFF001870_H
