#ifndef BUFF101101_H
#define BUFF101101_H
#include "buff.h"

class Buff101101 : public BuffR
{
public:
    Buff101101() {}
    Buff101101(int s, int d, int m) : BuffR(s, d, m) { id = 101101; }
    virtual ~Buff101101() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float l4 = 0.0f;
};

#endif // BUFF101101_H
