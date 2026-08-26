#ifndef BUFF001540_H
#define BUFF001540_H
#include "buff.h"

class Buff001540 : public BuffR
{
public:
    Buff001540() {}
    Buff001540(int s, int d, int m) : BuffR(s, d, m) { id = 1540; }
    virtual ~Buff001540() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );

private:
    float k1 = 0.0f;
};

#endif // BUFF001540_H
