#ifndef BUFF101121_H
#define BUFF101121_H
#include "buff.h"

class Buff101121 : public BuffR
{
public:
    Buff101121() {}
    Buff101121(int s, int d, int m) : BuffR(s, d, m) { id = 101121; }
    virtual ~Buff101121() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101121_H
