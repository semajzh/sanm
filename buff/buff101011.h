#ifndef BUFF101011_H
#define BUFF101011_H
#include "buff.h"

class Buff101011 : public BuffR
{
public:
    Buff101011() {}
    Buff101011(int s, int d, int m) : BuffR(s, d, m) { id = 101011; }
    virtual ~Buff101011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101011_H
