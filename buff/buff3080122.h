#ifndef BUFF3080122_H
#define BUFF3080122_H
#include "buff.h"

class Buff3080122 : public BuffC
{
public:
    Buff3080122() {}
    Buff3080122(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 3080122; }
    virtual ~Buff3080122() {}

    virtual void enter(Ground*);
    virtual void exit(Ground*);

private:
    float l0 = 0.0f;
};

#endif // BUFF3080122_H
