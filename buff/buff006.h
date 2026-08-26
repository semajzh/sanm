#ifndef BUFF006_H
#define BUFF006_H
#include "buff.h"

class Buff006 : public BuffC
{
public:
    Buff006() {}
    Buff006(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 6; }
    virtual ~Buff006() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    int count = 0;
};

#endif // BUFF006_H
