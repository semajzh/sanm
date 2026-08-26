#ifndef BUFF102_H
#define BUFF102_H
#include "buff.h"

class Buff102 : public BuffR
{
public:
    Buff102() {}
    Buff102(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 102; }
    virtual ~Buff102() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ground);
    int run(Ground* ground, float& point);
    inline int count() { return meta; }

private:
    bool check1140121(Ground* ground, int t);
    bool check0140121(Ground* ground, int obj);
};

#endif // BUFF102_H
