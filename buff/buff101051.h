#ifndef BUFF101051_H
#define BUFF101051_H
#include "buff.h"

class Buff101051 : public BuffR
{
public:
    Buff101051() {}
    Buff101051(int s, int d, int m) : BuffR(s, d, m) { id = 101051; }
    virtual ~Buff101051() {}

    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j13[3] = {0};
    float j14[3] = {0};
};

#endif // BUFF101051_H
