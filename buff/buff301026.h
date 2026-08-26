#ifndef BUFF301026_H
#define BUFF301026_H
#include "buff.h"

class Buff301026 : public BuffR
{
public:
    Buff301026() {}
    Buff301026(int s, int d, int m) : BuffR(s, d, m) { id = 301026; }
    virtual ~Buff301026() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
    virtual void run(Ground* ground);

private:
   float k2 = 0.0f;
   int count = 0;
   void randombuff(Ground *ground, int des, int obj);
};

#endif // BUFF301026_H
