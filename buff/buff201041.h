#ifndef BUFF201041_H
#define BUFF201041_H
#include "buff.h"

class Buff201041 : public BuffR
{
public:
    Buff201041() {}
    Buff201041(int s, int d, int m) : BuffR(s, d, m) { id = 201041; }
    virtual ~Buff201041() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float j9 = 0.0f;
   float j11 = 0.0f;
};

#endif // BUFF201041_H
