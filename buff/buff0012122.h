#ifndef BUFF0012122_H
#define BUFF0012122_H
#include "buff.h"

class Buff0012122 : public BuffC
{
public:
    Buff0012122() {}
    Buff0012122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 12122; }
    virtual ~Buff0012122() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);
};

#endif // BUFF0012122_H
