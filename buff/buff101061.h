#ifndef BUFF101061_H
#define BUFF101061_H
#include "buff.h"

class Buff101061 : public BuffR
{
public:
    Buff101061() {}
    Buff101061(int s, int d, int m) : BuffR(s, d, m) { id = 101061; }
    virtual ~Buff101061() {}
    virtual void run(Ground* ) {}
    float run();
};

#endif // BUFF101061_H
