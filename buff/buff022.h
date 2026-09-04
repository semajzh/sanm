#ifndef BUFF022_H
#define BUFF022_H
#include "buff.h"

class Buff022 : public BuffC
{
public:
    Buff022() {}
    Buff022(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 22; }
    virtual ~Buff022() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);
    inline int num() { return count; }

private:
    bool check302012(Ground* ground);
    int count = 0;
};

#endif // BUFF022_H
