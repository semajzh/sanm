#ifndef BUFF101_H
#define BUFF101_H
#include "buff.h"

class Buff101 : public BuffR
{
public:
    Buff101() {}
    Buff101(int s, int d, int m, int t) : BuffR(s, d, m, t) { id = 101; }
    virtual ~Buff101() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void update(Ground* , QSharedPointer<Buff> buff);
    virtual void run(Ground* ) {}
    int run(Ground* ground, int );
};

#endif // BUFF101_H
