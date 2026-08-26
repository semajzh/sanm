#ifndef BUFF101042_H
#define BUFF101042_H
#include "buff.h"

class Buff101042 : public BuffC
{
public:
    Buff101042() {}
    Buff101042(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 101042; }
    virtual ~Buff101042() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101042_H
