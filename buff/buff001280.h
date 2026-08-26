#ifndef BUFF001280_H
#define BUFF001280_H
#include "buff.h"

class Buff001280 : public BuffR
{
public:
    Buff001280() {}
    Buff001280(int s, int d, int m) : BuffR(s, d, m) { id = 1280; }
    virtual ~Buff001280() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF001280_H
