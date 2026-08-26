#ifndef BUFF101041_H
#define BUFF101041_H
#include "buff.h"

class Buff101041 : public BuffR
{
public:
    Buff101041() {}
    Buff101041(int s, int d, int m) : BuffR(s, d, m) { id = 101041; }
    virtual ~Buff101041() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF101041_H
