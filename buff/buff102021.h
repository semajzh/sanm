#ifndef BUFF102021_H
#define BUFF102021_H
#include "buff.h"

class Buff102021 : public BuffR
{
public:
    Buff102021() {}
    Buff102021(int s, int d, int m) : BuffR(s, d, m) { id = 102021; }
    virtual ~Buff102021() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float l2 = 0.0f;
};

#endif // BUFF102021_H
