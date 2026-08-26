#ifndef BUFF309011_H
#define BUFF309011_H
#include "buff.h"

class Buff309011 : public BuffR
{
public:
    Buff309011() {}
    Buff309011(int s, int d, int m) : BuffR(s, d, m) { id = 309011; }
    virtual ~Buff309011() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float j7 = 0.0f;
};

#endif // BUFF309011_H
