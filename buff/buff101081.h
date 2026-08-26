#ifndef BUFF101081_H
#define BUFF101081_H
#include "buff.h"

class Buff101081 : public BuffR
{
public:
    Buff101081() {}
    Buff101081(int s, int d, int m) : BuffR(s, d, m) { id = 101081; }
    virtual ~Buff101081() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101081_H
