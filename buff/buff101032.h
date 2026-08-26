#ifndef BUFF101032_H
#define BUFF101032_H
#include "buff.h"

class Buff101032 : public BuffR
{
public:
    Buff101032() {}
    Buff101032(int s, int d, int m) : BuffR(s, d, m) { id = 101032; }
    virtual ~Buff101032() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j13 = 0.0f;
    float k8 = 0.0f;
};

#endif // BUFF101032_H
