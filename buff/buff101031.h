#ifndef BUFF101031_H
#define BUFF101031_H
#include "buff.h"

class Buff101031 : public BuffR
{
public:
    Buff101031() {}
    Buff101031(int s, int d, int m) : BuffR(s, d, m) { id = 101031; }
    virtual ~Buff101031() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k8 = 0.0f;
};

#endif // BUFF101031_H
