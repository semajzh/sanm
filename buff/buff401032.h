#ifndef BUFF401032_H
#define BUFF401032_H
#include "buff.h"

class Buff401032 : public BuffR
{
public:
    Buff401032() {}
    Buff401032(int s, int d, int m) : BuffR(s, d, m) { id = 401032; }
    virtual ~Buff401032() {}

    virtual void run(Ground* ground);
};

#endif // BUFF401032_H
