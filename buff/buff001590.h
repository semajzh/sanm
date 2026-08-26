#ifndef BUFF001590_H
#define BUFF001590_H
#include "buff.h"

class Buff001590 : public BuffC
{
public:
    Buff001590() {}
    Buff001590(int s, int d, int m, int r) : BuffC(s, d, m, r) { id = 1590; }
    virtual ~Buff001590() {}

    virtual void enter(Ground* );
    virtual void exit(Ground* );
};

#endif // BUFF001590_H
