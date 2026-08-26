#ifndef BUFF008_H
#define BUFF008_H
#include "buff.h"

class Buff008 : public BuffC
{
public:
    Buff008() {}
    Buff008(int s, int d, int m, int r) : BuffC(s, d, m, r)  { id = 8; };
    virtual ~Buff008() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    bool check2100121(Ground* ground, int obj);
    int count = 0;
};

#endif // BUFF008_H
