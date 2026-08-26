#ifndef BUFF0010924_H
#define BUFF0010924_H
#include "buff.h"

class Buff0010924 : public BuffC
{
public:
    Buff0010924() {}
    Buff0010924(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 10924; }
    virtual ~Buff0010924() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j0 = 0.0f;
};

#endif // BUFF0010924_H
