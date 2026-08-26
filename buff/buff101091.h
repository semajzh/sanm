#ifndef BUFF101091_H
#define BUFF101091_H
#include "buff.h"

class Buff101091 : public BuffR
{
public:
    Buff101091() {}
    Buff101091(int s, int d, int m) : BuffR(s, d, m) { id = 101091; }
    virtual ~Buff101091() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float j1 = 0.0f;
};

#endif // BUFF101091_H
