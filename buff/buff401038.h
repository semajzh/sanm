#ifndef BUFF401038_H
#define BUFF401038_H
#include "buff.h"

class Buff401038 : public BuffC
{
public:
    Buff401038() {}
    Buff401038(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 401038; }
    virtual ~Buff401038() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
   float k4 = 0.0f;
};

#endif // BUFF401038_H
