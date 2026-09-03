#ifndef BUFF021_H
#define BUFF021_H
#include "buff.h"

class Buff021 : public BuffC
{
public:
    Buff021() {}
    Buff021(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 21; }
    virtual ~Buff021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);

private:
    int count = 0;
};

#endif // BUFF021_H
