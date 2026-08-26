#ifndef BUFF001780_H
#define BUFF001780_H
#include "buff.h"

class Buff001780 : public BuffR
{
public:
    Buff001780() {}
    Buff001780(int s, int d, int m) : BuffR(s, d, m) { id = 1780; }
    virtual ~Buff001780() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
    float j13 = 0.0f;
};

#endif // BUFF001780_H
