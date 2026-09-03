#ifndef BUFF101022_H
#define BUFF101022_H
#include "buff.h"

class Buff101022 : public BuffR
{
public:
    Buff101022() {}
    Buff101022(int s, int d, int m) : BuffR(s, d, m) { id = 101022; }
    virtual ~Buff101022() {}

    virtual void run(Ground* ) {}
    virtual bool run(Ground* ground, int );
};

#endif // BUFF101022_H
