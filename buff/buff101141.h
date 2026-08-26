#ifndef BUFF101141_H
#define BUFF101141_H
#include "buff.h"

class Buff101141 : public BuffR
{
public:
    Buff101141() {}
    Buff101141(int s, int d, int m) : BuffR(s, d, m) { id = 101141; }
    virtual ~Buff101141() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k4 = 0.0f;
    float j13 = 0.0f;
};

#endif // BUFF101141_H
