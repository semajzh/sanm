#ifndef BUFF001190_H
#define BUFF001190_H
#include "buff.h"

class Buff001190 : public BuffR
{
public:
    Buff001190() {}
    Buff001190(int s, int d, int m) : BuffR(s, d, m) { id = 1190; }
    virtual ~Buff001190() {}

    virtual void enter(Ground* ground);
    virtual void exit(Ground* ground);

private:
    float k1 = 0.0f;
};

#endif // BUFF001190_H
