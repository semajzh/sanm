#ifndef BUFF0015621_H
#define BUFF0015621_H
#include "buff.h"

class Buff0015621 : public BuffR
{
public:
    Buff0015621() {}
    Buff0015621(int s, int d, int m) : BuffR(s, d, m) { id = 15621; }
    virtual ~Buff0015621() {}

    virtual void run(Ground* ground);
};

#endif // BUFF0015621_H
