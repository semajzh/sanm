#ifndef BUFF101111_H
#define BUFF101111_H
#include "buff.h"

class Buff101111 : public BuffR
{
public:
    Buff101111() {}
    Buff101111(int s, int d, int m) : BuffR(s, d, m) { id = 101111; }
    virtual ~Buff101111() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101111_H
