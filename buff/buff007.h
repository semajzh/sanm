#ifndef BUFF007_H
#define BUFF007_H
#include "buff.h"

class Buff007 : public BuffC
{
public:
    Buff007() {}
    Buff007(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 7; }
    virtual ~Buff007() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);
    int run(Ground* ground, int );

private:
    bool check302012(Ground* ground);
    int count = 0;
};

#endif // BUFF007_H
