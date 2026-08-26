#ifndef BUFF001520_H
#define BUFF001520_H
#include "buff.h"

class Buff001520 : public BuffR
{
public:
    Buff001520() {}
    Buff001520(int s, int d, int m) : BuffR(s, d, m) { id = 1520; }
    virtual ~Buff001520() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001520_H
