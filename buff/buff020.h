#ifndef BUFF020_H
#define BUFF020_H
#include "buff.h"

class Buff020 : public BuffR
{
public:
    Buff020() {}
    Buff020(int s, int d, int m) : BuffR(s, d, m) { id = 20; }
    virtual ~Buff020() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    int run();

    static bool check020(Ground* ground, int src, int des, bool b20);

private:
    int count = 0;
};

#endif // BUFF020_H
